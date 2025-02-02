
// Part of BNC, a utility for retrieving decoding and
// converting GNSS data streams from NTRIP broadcasters.
//
// Copyright (C) 2007
// German Federal Agency for Cartography and Geodesy (BKG)
// http://www.bkg.bund.de
// Czech Technical University Prague, Department of Geodesy
// http://www.fsv.cvut.cz
//
// Email: euref-ip@bkg.bund.de
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation, version 2.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

/* -------------------------------------------------------------------------
 * BKG NTRIP Client
 * -------------------------------------------------------------------------
 *
 * Class:      t_astro, t_tides, t_tropo
 *
 * Purpose:    Observation model
 *
 * Author:     L. Mervart
 *
 * Created:    29-Jul-2014
 *
 * Changes:    
 *
 * -----------------------------------------------------------------------*/


#include <cmath>

#include "pppModel.h"

using namespace BNC_PPP;
using namespace std;

const double t_astro::RHO_DEG   = 180.0 / M_PI;
const double t_astro::RHO_SEC   = 3600.0 * 180.0 / M_PI;
const double t_astro::MJD_J2000 = 51544.5;

/*++++++++++++++++++++++++++++++++*/
/*  Modified By Chaiyut 02-Jun-2017*/
/*++++++++++++++++++++++++++++++++*/
const double t_tides::RE_WGS84 	= 6378137.0;           /* earth semimajor axis (WGS84) (m) */
const double t_tides::FE_WGS84 	= (1.0/298.257223563); /* earth flattening (WGS84) */
const double t_tides::AU 		= 149597870691.0;      /* 1 AU (m) */
const double t_tides::GME 		= 3.986004415E+14; /* earth gravitational constant */
const double t_tides::GMS 		= 1.327124E+20;    /* sun gravitational constant */
const double t_tides::GMM 		= 4.902801E+12;    /* moon gravitational constant */
const std::string t_tides::FILEPATH = "/home/skycaptain/GNSS_Software/BNC_Dev/BNC_2.12.7_V3/Example_Configs";
/*++++++++++++++++++++++++++++++++*/

Matrix t_astro::rotX(double Angle) {
  const double C = cos(Angle);
  const double S = sin(Angle);
  Matrix UU(3,3);
  UU[0][0] = 1.0;  UU[0][1] = 0.0;  UU[0][2] = 0.0;
  UU[1][0] = 0.0;  UU[1][1] =  +C;  UU[1][2] =  +S;
  UU[2][0] = 0.0;  UU[2][1] =  -S;  UU[2][2] =  +C;
  return UU;
}

Matrix t_astro::rotY(double Angle) {
  const double C = cos(Angle);
  const double S = sin(Angle);
  Matrix UU(3,3);
  UU[0][0] =  +C;  UU[0][1] = 0.0;  UU[0][2] =  -S;
  UU[1][0] = 0.0;  UU[1][1] = 1.0;  UU[1][2] = 0.0;
  UU[2][0] =  +S;  UU[2][1] = 0.0;  UU[2][2] =  +C;
  return UU;
}

Matrix t_astro::rotZ(double Angle) {
  const double C = cos(Angle);
  const double S = sin(Angle);
  Matrix UU(3,3);
  UU[0][0] =  +C;  UU[0][1] =  +S;  UU[0][2] = 0.0;
  UU[1][0] =  -S;  UU[1][1] =  +C;  UU[1][2] = 0.0;
  UU[2][0] = 0.0;  UU[2][1] = 0.0;  UU[2][2] = 1.0;
  return UU;
}

// Greenwich Mean Sidereal Time
///////////////////////////////////////////////////////////////////////////
double t_astro::GMST(double Mjd_UT1) {

  const double Secs = 86400.0;

  double Mjd_0 = floor(Mjd_UT1);
  double UT1   = Secs*(Mjd_UT1-Mjd_0);
  double T_0   = (Mjd_0  -MJD_J2000)/36525.0; 
  double T     = (Mjd_UT1-MJD_J2000)/36525.0; 

  double gmst  = 24110.54841 + 8640184.812866*T_0 + 1.002737909350795*UT1
                 + (0.093104-6.2e-6*T)*T*T;

  return  2.0*M_PI*Frac(gmst/Secs);
}

// Nutation Matrix
///////////////////////////////////////////////////////////////////////////
Matrix t_astro::NutMatrix(double Mjd_TT) {

  const double T  = (Mjd_TT-MJD_J2000)/36525.0;

  double ls = 2.0*M_PI*Frac(0.993133+  99.997306*T);
  double D  = 2.0*M_PI*Frac(0.827362+1236.853087*T);
  double F  = 2.0*M_PI*Frac(0.259089+1342.227826*T);
  double N  = 2.0*M_PI*Frac(0.347346-   5.372447*T);

  double dpsi = ( -17.200*sin(N)   - 1.319*sin(2*(F-D+N)) - 0.227*sin(2*(F+N))
                + 0.206*sin(2*N) + 0.143*sin(ls) ) / RHO_SEC;
  double deps = ( + 9.203*cos(N)   + 0.574*cos(2*(F-D+N)) + 0.098*cos(2*(F+N))
                - 0.090*cos(2*N)                 ) / RHO_SEC;

  double eps  = 0.4090928-2.2696E-4*T;

  return  rotX(-eps-deps)*rotZ(-dpsi)*rotX(+eps);
}

// Precession Matrix
///////////////////////////////////////////////////////////////////////////
Matrix t_astro::PrecMatrix(double Mjd_1, double Mjd_2) {

  const double T  = (Mjd_1-MJD_J2000)/36525.0;
  const double dT = (Mjd_2-Mjd_1)/36525.0;
  
  double zeta  =  ( (2306.2181+(1.39656-0.000139*T)*T)+
                        ((0.30188-0.000344*T)+0.017998*dT)*dT )*dT/RHO_SEC;
  double z     =  zeta + ( (0.79280+0.000411*T)+0.000205*dT)*dT*dT/RHO_SEC;
  double theta =  ( (2004.3109-(0.85330+0.000217*T)*T)-
                        ((0.42665+0.000217*T)+0.041833*dT)*dT )*dT/RHO_SEC;

  return rotZ(-z) * rotY(theta) * rotZ(-zeta);
}    

// Sun's position
///////////////////////////////////////////////////////////////////////////
ColumnVector t_astro::Sun(double Mjd_TT) {

  const double eps = 23.43929111/RHO_DEG;
  const double T   = (Mjd_TT-MJD_J2000)/36525.0;

  double M = 2.0*M_PI * Frac ( 0.9931267 + 99.9973583*T);
  double L = 2.0*M_PI * Frac ( 0.7859444 + M/2.0/M_PI + 
                        (6892.0*sin(M)+72.0*sin(2.0*M)) / 1296.0e3);
  double r = 149.619e9 - 2.499e9*cos(M) - 0.021e9*cos(2*M);
  
  ColumnVector r_Sun(3); 
  r_Sun << r*cos(L) << r*sin(L) << 0.0; r_Sun = rotX(-eps) * r_Sun;

  return    rotZ(GMST(Mjd_TT))
          * NutMatrix(Mjd_TT) 
          * PrecMatrix(MJD_J2000, Mjd_TT)
          * r_Sun;
}

// Moon's position
///////////////////////////////////////////////////////////////////////////
ColumnVector t_astro::Moon(double Mjd_TT) {

  const double eps = 23.43929111/RHO_DEG;
  const double T   = (Mjd_TT-MJD_J2000)/36525.0;

  double L_0 = Frac ( 0.606433 + 1336.851344*T );
  double l   = 2.0*M_PI*Frac ( 0.374897 + 1325.552410*T );
  double lp  = 2.0*M_PI*Frac ( 0.993133 +   99.997361*T );
  double D   = 2.0*M_PI*Frac ( 0.827361 + 1236.853086*T );
  double F   = 2.0*M_PI*Frac ( 0.259086 + 1342.227825*T );
    
  double dL = +22640*sin(l) - 4586*sin(l-2*D) + 2370*sin(2*D) +  769*sin(2*l) 
              -668*sin(lp) - 412*sin(2*F) - 212*sin(2*l-2*D)- 206*sin(l+lp-2*D)
              +192*sin(l+2*D) - 165*sin(lp-2*D) - 125*sin(D) - 110*sin(l+lp)
              +148*sin(l-lp) - 55*sin(2*F-2*D);

  double L = 2.0*M_PI * Frac( L_0 + dL/1296.0e3 );

  double S  = F + (dL+412*sin(2*F)+541*sin(lp)) / RHO_SEC; 
  double h  = F-2*D;
  double N  = -526*sin(h) + 44*sin(l+h) - 31*sin(-l+h) - 23*sin(lp+h) 
              +11*sin(-lp+h) - 25*sin(-2*l+F) + 21*sin(-l+F);

  double B = ( 18520.0*sin(S) + N ) / RHO_SEC;
    
  double cosB = cos(B);

  double R = 385000e3 - 20905e3*cos(l) - 3699e3*cos(2*D-l) - 2956e3*cos(2*D)
      -570e3*cos(2*l) + 246e3*cos(2*l-2*D) - 205e3*cos(lp-2*D) 
      -171e3*cos(l+2*D) - 152e3*cos(l+lp-2*D);   

  ColumnVector r_Moon(3); 
  r_Moon << R*cos(L)*cosB << R*sin(L)*cosB << R*sin(B);
  r_Moon = rotX(-eps) * r_Moon;
    
  return    rotZ(GMST(Mjd_TT)) 
          * NutMatrix(Mjd_TT) 
          * PrecMatrix(MJD_J2000, Mjd_TT)
          * r_Moon;
}


//+++++++++++++++++++++++++++++++++++++++++++
// Modified By chaiyut
//+++++++++++++++++++++++++++++++++++++++++++

/* read blq ocean tide loading parameters --------------------------------------
* read blq ocean tide loading parameters
* args   : char   *file       I   BLQ ocean tide loading parameter file
*          char   *sta        I   station name
*          double *odisp      O   ocean tide loading parameters
* return : status (1:ok,0:file open error)
*-----------------------------------------------------------------------------*/
int t_tides::readblq(const char* file, const char* sta, double* odisp){

    FILE *fp;
    char buff[256],staname[32]="",name[32],*p;
    
    /* station name to upper case */
    sscanf(sta,"%16s",staname);
    for (p=staname;(*p=(char)toupper((int)(*p)));p++) ;
    
    if (!(fp=fopen(file,"r"))) {
        return 0;
    }
    while (fgets(buff,sizeof(buff),fp)) {
        if (!strncmp(buff,"$$",2)||strlen(buff)<2)continue;
        if (sscanf(buff+2,"%16s",name)<1) continue;
        for (p=name;(*p=(char)toupper((int)(*p)));p++) ;
        if (strcmp(name,staname)) continue;
        
        /* read blq record */
        if (readblqrecord(fp,odisp)) {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}
/* read blq record -----------------------------------------------------------*/
int t_tides::readblqrecord(FILE* fp, double* odisp){
    double v[11];
    char buff[256];
    int i,n=0;
    while (fgets(buff,sizeof(buff),fp)) {
        if (!strncmp(buff,"$$",2)) continue;
        if (sscanf(buff,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",
                   v,v+1,v+2,v+3,v+4,v+5,v+6,v+7,v+8,v+9,v+10)<11) continue;
        for (i=0;i<11;i++) odisp[n+i*6]=v[i];
        if (++n==6) return 1;
    }
    return 0;
} 
void t_tides::tide_oload(gtime_t tut, const double* odisp, double* denu){
    const double args[][5]={
        {1.40519E-4, 2.0,-2.0, 0.0, 0.00},  /* M2 */
        {1.45444E-4, 0.0, 0.0, 0.0, 0.00},  /* S2 */
        {1.37880E-4, 2.0,-3.0, 1.0, 0.00},  /* N2 */
        {1.45842E-4, 2.0, 0.0, 0.0, 0.00},  /* K2 */
        {0.72921E-4, 1.0, 0.0, 0.0, 0.25},  /* K1 */
        {0.67598E-4, 1.0,-2.0, 0.0,-0.25},  /* O1 */
        {0.72523E-4,-1.0, 0.0, 0.0,-0.25},  /* P1 */
        {0.64959E-4, 1.0,-3.0, 1.0,-0.25},  /* Q1 */
        {0.53234E-5, 0.0, 2.0, 0.0, 0.00},  /* Mf */
        {0.26392E-5, 0.0, 1.0,-1.0, 0.00},  /* Mm */
        {0.03982E-5, 2.0, 0.0, 0.0, 0.00}   /* Ssa */
    };
    const double ep1975[]={1975,1,1,0,0,0};
    double ep[6],fday,days,t,t2,t3,a[5],ang,dp[3]={0};
    int i,j;
    
    //trace(3,"tide_oload:\n");
   
    /* angular argument: see subroutine arg.f for reference [1] */
    time2epoch(tut,ep);
    fday=ep[3]*3600.0+ep[4]*60.0+ep[5];
    ep[3]=ep[4]=ep[5]=0.0;
    days=timediff(epoch2time(ep),epoch2time(ep1975))/86400.0+1.0;
    t=(27392.500528+1.000000035*days)/36525.0;
    t2=t*t; t3=t2*t;
    
    a[0]=fday;
    a[1]=(279.69668+36000.768930485*t+3.03E-4*t2)*D2R; /* H0 */
    a[2]=(270.434358+481267.88314137*t-0.001133*t2+1.9E-6*t3)*D2R; /* S0 */
    a[3]=(334.329653+4069.0340329577*t-0.010325*t2-1.2E-5*t3)*D2R; /* P0 */
    a[4]=2.0*M_PI;
    
    /* displacements by 11 constituents */
    for (i=0;i<11;i++) {
        ang=0.0;
        for (j=0;j<5;j++) ang+=a[j]*args[i][j];
        for (j=0;j<3;j++) dp[j]+=odisp[j+i*6]*cos(ang-odisp[j+3+i*6]*D2R);
    }
    denu[0]=-dp[1];
    denu[1]=-dp[2];
    denu[2]= dp[0];    
}

ColumnVector t_tides::tideOcean(const bncTime& time, const ColumnVector& xyz){
	gtime_t tutc = bncTimeTogtime(time);
	double ell[3];
	xyz2ell(xyz.data(), ell);
  		 
    gtime_t tut;
    double E[9],drt[3],denu[3],rs[3],rm[3],gmst,erpv[5]={0};
    int i;  
    tut=timeadd(tutc,erpv[2]);
    ColumnVector dX(3); dX = 0.0;
	double dr[3];
    dr[0]=dr[1]=dr[2]=0.0;
    xyz2enu(ell,E);
    	
    /* ocean tide loading */
	if (_blqfile) {	
        tide_oload(tut,_odisp,denu);
        //std::cout << "\nOcean tide loading" << std::endl; 
        matmul("TN",3,1,3,1.0,E,denu,0.0,drt);
        for (i=0;i<3;i++) dr[i]+=drt[i];     
    }

    
    dX[0] = dr[0];
    dX[1] = dr[1];
    dX[2] = dr[2];
    return dX;
}
// Constructor
////////////////////////////////////////////////////////////////////////////
t_tides::t_tides(std::string roverName, std::string cwd) {
	/*
	 * 	Input
	 * 		roverName
	 * 		cwd : execute path
	 */
	_lastMjd = 0.0;
	_rSun    = 0.0;
	_rMoon   = 0.0;
	_blqfile = 0;
 
	char* rn = strdup(roverName.c_str());
	std::string strblq = cwd + "/Example_Configs/tides/OTL.blq";
	char* blqfile = strdup(strblq.c_str());	
	_blqfile = readblq(blqfile, rn, _odisp); 
	free(blqfile);
	free(rn);
}
//+++++++++++++++++++++++++++++++++++++++++++




// Tidal Correction 
////////////////////////////////////////////////////////////////////////////
ColumnVector t_tides::displacement(const bncTime& time, const ColumnVector& xyz) {

  if (time.undef()) {
    ColumnVector dX(3); dX = 0.0;
    return dX;
  }

  double Mjd = time.mjd() + time.daysec() / 86400.0;

  if (Mjd != _lastMjd) {
    _lastMjd = Mjd;
    _xSun = t_astro::Sun(Mjd);
    _rSun = sqrt(DotProduct(_xSun,_xSun));
    _xSun /= _rSun;
    _xMoon = t_astro::Moon(Mjd);
    _rMoon = sqrt(DotProduct(_xMoon,_xMoon));
    _xMoon /= _rMoon;
  }

  double       rRec    = sqrt(DotProduct(xyz, xyz));
  ColumnVector xyzUnit = xyz / rRec;

  // Love's Numbers
  // --------------
  const double H2 = 0.6078;
  const double L2 = 0.0847;

  // Tidal Displacement
  // ------------------
  double scSun  = DotProduct(xyzUnit, _xSun);
  double scMoon = DotProduct(xyzUnit, _xMoon);

  double p2Sun  = 3.0 * (H2/2.0-L2) * scSun  * scSun  - H2/2.0;
  double p2Moon = 3.0 * (H2/2.0-L2) * scMoon * scMoon - H2/2.0;

  double x2Sun  = 3.0 * L2 * scSun;
  double x2Moon = 3.0 * L2 * scMoon;
  
  const double gmWGS = 398.6005e12;
  const double gms   = 1.3271250e20;
  const double gmm   = 4.9027890e12;

  double facSun  = gms / gmWGS * 
                   (rRec * rRec * rRec * rRec) / (_rSun * _rSun * _rSun);

  double facMoon = gmm / gmWGS * 
                   (rRec * rRec * rRec * rRec) / (_rMoon * _rMoon * _rMoon);

  ColumnVector dX = facSun  * (x2Sun  * _xSun  + p2Sun  * xyzUnit) + 
                    facMoon * (x2Moon * _xMoon + p2Moon * xyzUnit);

  return dX;
}

// Constructor
///////////////////////////////////////////////////////////////////////////
t_windUp::t_windUp() {
  for (unsigned ii = 0; ii <= t_prn::MAXPRN; ii++) {
    sumWind[ii]   = 0.0;
    lastEtime[ii] = 0.0;
  }
}

// Phase Wind-Up Correction
///////////////////////////////////////////////////////////////////////////
double t_windUp::value(const bncTime& etime, const ColumnVector& rRec, 
                       t_prn prn, const ColumnVector& rSat) {

  if (etime.mjddec() != lastEtime[prn.toInt()]) {

    // Unit Vector GPS Satellite --> Receiver
    // --------------------------------------
    ColumnVector rho = rRec - rSat;
    rho /= rho.norm_Frobenius();
    
    // GPS Satellite unit Vectors sz, sy, sx
    // -------------------------------------
    ColumnVector sz = -rSat / rSat.norm_Frobenius();

    ColumnVector xSun = t_astro::Sun(etime.mjddec());
    xSun /= xSun.norm_Frobenius();

    ColumnVector sy = crossproduct(sz, xSun);
    ColumnVector sx = crossproduct(sy, sz);

    // Effective Dipole of the GPS Satellite Antenna
    // ---------------------------------------------
    ColumnVector dipSat = sx - rho * DotProduct(rho,sx) 
                                                - crossproduct(rho, sy);
    
    // Receiver unit Vectors rx, ry
    // ----------------------------
    ColumnVector rx(3);
    ColumnVector ry(3);

    double recEll[3]; xyz2ell(rRec.data(), recEll) ;
    double neu[3];
    
    neu[0] = 1.0;
    neu[1] = 0.0;
    neu[2] = 0.0;
    neu2xyz(recEll, neu, rx.data());
    
    neu[0] =  0.0;
    neu[1] = -1.0;
    neu[2] =  0.0;
    neu2xyz(recEll, neu, ry.data());
    
    // Effective Dipole of the Receiver Antenna
    // ----------------------------------------
    ColumnVector dipRec = rx - rho * DotProduct(rho,rx) 
                                                   + crossproduct(rho, ry);
    
    // Resulting Effect
    // ----------------
    double alpha = DotProduct(dipSat,dipRec) / 
                      (dipSat.norm_Frobenius() * dipRec.norm_Frobenius());
    
    if (alpha >  1.0) alpha =  1.0;
    if (alpha < -1.0) alpha = -1.0;
    
    double dphi = acos(alpha) / 2.0 / M_PI;  // in cycles
    
    if ( DotProduct(rho, crossproduct(dipSat, dipRec)) < 0.0 ) {
      dphi = -dphi;
    }

    if (lastEtime[prn.toInt()] == 0.0) {
      sumWind[prn.toInt()] = dphi;
    }
    else {
      sumWind[prn.toInt()] = nint(sumWind[prn.toInt()] - dphi) + dphi;
    }

    lastEtime[prn.toInt()] = etime.mjddec();
  }

  return sumWind[prn.toInt()];  
}

// Tropospheric Model (Saastamoinen)
////////////////////////////////////////////////////////////////////////////
double t_tropo::delay_saast(const ColumnVector& xyz, double Ele) {

  Tracer tracer("bncModel::delay_saast");

  if (xyz[0] == 0.0 && xyz[1] == 0.0 && xyz[2] == 0.0) {
    return 0.0;
  }

  double ell[3]; 
  xyz2ell(xyz.data(), ell);
  double height = ell[2];

  double pp =  1013.25 * pow(1.0 - 2.26e-5 * height, 5.225);
  double TT =  18.0 - height * 0.0065 + 273.15;
  double hh =  50.0 * exp(-6.396e-4 * height);
  double ee =  hh / 100.0 * exp(-37.2465 + 0.213166*TT - 0.000256908*TT*TT);

  double h_km = height / 1000.0;
  
  if (h_km < 0.0) h_km = 0.0;
  if (h_km > 5.0) h_km = 5.0;
  int    ii   = int(h_km + 1); if (ii > 5) ii = 5;
  double href = ii - 1;
  
  double bCor[6]; 
  bCor[0] = 1.156;
  bCor[1] = 1.006;
  bCor[2] = 0.874;
  bCor[3] = 0.757;
  bCor[4] = 0.654;
  bCor[5] = 0.563;
  
  double BB = bCor[ii-1] + (bCor[ii]-bCor[ii-1]) * (h_km - href);
  
  double zen  = M_PI/2.0 - Ele;

  return (0.002277/cos(zen)) * (pp + ((1255.0/TT)+0.05)*ee - BB*(tan(zen)*tan(zen)));
}

// Constructor
///////////////////////////////////////////////////////////////////////////
t_iono::t_iono() {
  _psiPP = _phiPP = _lambdaPP = _lonS = 0.0;
}

t_iono::~t_iono() {}

double t_iono::stec(const t_vTec* vTec, double signalPropagationTime,
      const ColumnVector& rSat, const bncTime& epochTime,
      const ColumnVector& xyzSta) {

  // Latitude, longitude, height are defined with respect to a spherical earth model
  // -------------------------------------------------------------------------------
  ColumnVector geocSta(3);
  if (xyz2geoc(xyzSta.data(), geocSta.data()) != success) {
    return 0.0;
  }

  // satellite position rotated to the epoch of signal reception
  // -----------------------------------------------------------
  ColumnVector xyzSat(3);
  double omegaZ = t_CST::omega * signalPropagationTime;
  xyzSat[0] = rSat[0] * cos(omegaZ) + rSat[1] * sin(omegaZ);
  xyzSat[1] = rSat[1] * cos(omegaZ) - rSat[0] * sin(omegaZ);
  xyzSat[2] = rSat[2];

  // elevation and azimuth with respect to a spherical earth model
  // -------------------------------------------------------------
  ColumnVector rhoV = xyzSat - xyzSta;
  double rho = rhoV.norm_Frobenius();
  ColumnVector neu(3);
  xyz2neu(geocSta.data(), rhoV.data(), neu.data());
  double sphEle = acos( sqrt(neu[0]*neu[0] + neu[1]*neu[1]) / rho );
  if (neu[2] < 0) {
    sphEle *= -1.0;
  }
  double sphAzi = atan2(neu[1], neu[0]);

  double epoch = fmod(epochTime.gpssec(), 86400.0);

  double stec = 0.0;
  for (unsigned ii = 0; ii < vTec->_layers.size(); ii++) {
    piercePoint(vTec->_layers[ii]._height, epoch, geocSta.data(), sphEle, sphAzi);
    double vtec = vtecSingleLayerContribution(vTec->_layers[ii]);
    stec += vtec * sin(sphEle + _psiPP);
  }
  return stec;
}

double t_iono::vtecSingleLayerContribution(const t_vTecLayer& vTecLayer) {

  double vtec = 0.0;
  int N = vTecLayer._C.Nrows()-1;
  int M = vTecLayer._C.Ncols()-1;
  double fac;

  for (int n = 0; n <= N; n++) {
    for (int m = 0; m <= min(n, M); m++) {
      double pnm = associatedLegendreFunction(n, m, sin(_phiPP));
      double a = double(factorial(n - m));
      double b = double(factorial(n + m));
      if (m == 0) {
        fac = sqrt(2.0 * n + 1);
      }
      else {
        fac = sqrt(2.0 * (2.0 * n + 1) * a / b);
      }
      pnm *= fac;
      double Cnm_mlambda = vTecLayer._C[n][m] * cos(m * _lonS);
      double Snm_mlambda = vTecLayer._S[n][m] * sin(m * _lonS);
      vtec += (Snm_mlambda + Cnm_mlambda) * pnm;
    }
  }

  if (vtec < 0.0) {
    return 0.0;
  }

  return vtec;
}

void t_iono::piercePoint(double layerHeight, double epoch, const double* geocSta,
    double sphEle, double sphAzi) {

  double q = (t_CST::rgeoc + geocSta[2]) / (t_CST::rgeoc + layerHeight);

  _psiPP = M_PI/2 - sphEle - asin(q * cos(sphEle));

  _phiPP = asin(sin(geocSta[0]) * cos(_psiPP) + cos(geocSta[0]) * sin(_psiPP) * cos(sphAzi));

  if (( (geocSta[0]*180.0/M_PI > 0) && (  tan(_psiPP) * cos(sphAzi)  > tan(M_PI/2 - geocSta[0])) )  ||
      ( (geocSta[0]*180.0/M_PI < 0) && (-(tan(_psiPP) * cos(sphAzi)) > tan(M_PI/2 + geocSta[0])) ))  {
    _lambdaPP = geocSta[1] + M_PI - asin((sin(_psiPP) * sin(sphAzi) / cos(_phiPP)));
  } else {
    _lambdaPP = geocSta[1]        + asin((sin(_psiPP) * sin(sphAzi) / cos(_phiPP)));
  }

  _lonS = fmod((_lambdaPP + (epoch - 50400) * M_PI / 43200), 2*M_PI);

  return;
}

