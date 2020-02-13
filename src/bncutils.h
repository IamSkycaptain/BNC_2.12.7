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

#ifndef BNCUTILS_H
#define BNCUTILS_H

#include <vector>

#include <QString>
#include <QDateTime>

#include <newmat.h>
#include <bncconst.h>
#include <ephemeris.h>


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++
/*
 * ++++++++++++ Modified By Chaiyut ++++++++++++++++++++++ 
 * ++++++++++Source From RTKLIB 2.14.3 +++++++++++++++++++
*/

typedef struct {        /* time struct */
    time_t time;        /* time (s) expressed by standard time_t */
    double sec;         /* fraction of second under 1 s */
} gtime_t;

const double D2R = M_PI/180.0;
const double AS2R = (D2R/3600.0);    /* arc sec to radian */
/* 64 : max number of leap seconds table */
const double leaps[64+1][7]={ /* leap seconds (y,m,d,h,m,s,utc-gpst) */
    {2017,1,1,0,0,0,-18},
    {2015,7,1,0,0,0,-17},
    {2012,7,1,0,0,0,-16},
    {2009,1,1,0,0,0,-15},
    {2006,1,1,0,0,0,-14},
    {1999,1,1,0,0,0,-13},
    {1997,7,1,0,0,0,-12},
    {1996,1,1,0,0,0,-11},
    {1994,7,1,0,0,0,-10},
    {1993,7,1,0,0,0, -9},
    {1992,7,1,0,0,0, -8},
    {1991,1,1,0,0,0, -7},
    {1990,1,1,0,0,0, -6},
    {1988,1,1,0,0,0, -5},
    {1985,7,1,0,0,0, -4},
    {1983,7,1,0,0,0, -3},
    {1982,7,1,0,0,0, -2},
    {1981,7,1,0,0,0, -1},
    {0}
};

/* coordinate rotation matrix ------------------------------------------------*/
#define SQR(x)      ((x)*(x))
#define Rx(t,X) do { \
    (X)[0]=1.0; (X)[1]=(X)[2]=(X)[3]=(X)[6]=0.0; \
    (X)[4]=(X)[8]=cos(t); (X)[7]=sin(t); (X)[5]=-(X)[7]; \
} while (0)

#define Ry(t,X) do { \
    (X)[4]=1.0; (X)[1]=(X)[3]=(X)[5]=(X)[7]=0.0; \
    (X)[0]=(X)[8]=cos(t); (X)[2]=sin(t); (X)[6]=-(X)[2]; \
} while (0)

#define Rz(t,X) do { \
    (X)[8]=1.0; (X)[2]=(X)[5]=(X)[6]=(X)[7]=0.0; \
    (X)[0]=(X)[4]=cos(t); (X)[3]=sin(t); (X)[1]=-(X)[3]; \
} while (0)

double 		timediff(gtime_t t1, gtime_t t2);
void 		matmul(const char *tr, int n, int k, int m, double alpha,
                   const double *A, const double *B, double beta, double *C);
gtime_t 	epoch2time(const double *ep);
void 		time2epoch(gtime_t t, double* ep);
gtime_t 	timeadd(gtime_t t, double sec);
gtime_t 	gpst2utc(gtime_t t);     
double 		time2sec(gtime_t time, gtime_t *day);
gtime_t 	utc2gpst(gtime_t t);    
void 		ast_args(double t, double *f);
void 		nut_iau1980(double t, const double *f, double *dpsi, double *deps);
double 		utc2gmst(gtime_t t, double ut1_utc);
void 		time2str(gtime_t t, char *s, int n);
double 		dot(const double *a, const double *b, int n);
void 		eci2ecef(gtime_t tutc, const double *erpv, double *U, double *gmst);
double 		norm(const double *a, int n);
void 		ecef2enu(const double* pos, const double* xyz, double *enu);
void 		xyz2enu(const double *pos, double *E);
gtime_t 	bncTimeTogtime(const bncTime& time);
//++++++++++++++++++++++++  End  +++++++++++++++++++++++++


void         expandEnvVar(QString& str);

/**
 * Return GPS leap seconds for a given UTC time
 * @param year 4 digit year
 * @param month month in year (1-12)
 * @param day day in month (1-31)
 * @return number of leap seconds since 6.1.1980
 */
int          gnumleap(int year, int month, int day);

/**
 * Convert Moscow time into GPS or UTC. Note that parts of a second are not preserved
 * and must be handled separately.
 * @param week GPS week number (must be prefilled, contains fixed value afterwards)
 * @param secOfWeek seconds in GPS week (must be prefilled, contains fixed value afterwards)
 * @param mSecOfWeek milli seconds in GLONASS time
 * @param fixnumleap when <code>true</code> then result is UTC time, otherwise it is GPS
 * @return does not return a value, but updates first two arguments
 */
void         updatetime(int *week, int *secOfWeek, int mSecOfWeek, bool fixnumleap);

QDateTime    dateAndTimeFromGPSweek(int GPSWeek, double GPSWeeks);

void         currentGPSWeeks(int& week, double& sec);

QDateTime    currentDateAndTimeGPS();

bool         checkForWrongObsEpoch(bncTime obsEpoch);

QByteArray   ggaString(const QByteArray& latitude, const QByteArray& longitude,
                       const QByteArray& height, const QString& ggaType);

void         RSW_to_XYZ(const ColumnVector& rr, const ColumnVector& vv,
                        const ColumnVector& rsw, ColumnVector& xyz);

void         XYZ_to_RSW(const ColumnVector& rr, const ColumnVector& vv,
                        const ColumnVector& xyz, ColumnVector& rsw);

t_irc        xyz2ell(const double* XYZ, double* Ell);

t_irc        xyz2geoc(const double* XYZ, double* Geoc);

void         xyz2neu(const double* Ell, const double* xyz, double* neu);

void         neu2xyz(const double* Ell, const double* neu, double* xyz);

void         jacobiXYZ_NEU(const double* Ell, Matrix& jacobi);

void         jacobiEll_XYZ(const double* Ell, Matrix& jacobi);

void         covariXYZ_NEU(const SymmetricMatrix& Qxyz, const double* Ell,
                           SymmetricMatrix& Qneu);

void         covariNEU_XYZ(const SymmetricMatrix& Qneu, const double* Ell,
                           SymmetricMatrix& Qxyz);

double       Frac(double x);

double       Modulo(double x, double y);

double       nint(double val);

ColumnVector rungeKutta4(double xi, const ColumnVector& yi, double dx, double* acc,
                         ColumnVector (*der)(double x, const ColumnVector& y, double* acc));

void         GPSweekFromDateAndTime(const QDateTime& dateTime, int& GPSWeek, double& GPSWeeks);

void         GPSweekFromYMDhms(int year, int month, int day, int hour, int min, double sec,
                               int& GPSWeek, double& GPSWeeks);

void         mjdFromDateAndTime(const QDateTime& dateTime, int& mjd, double& dayfrac);

bool         findInVector(const std::vector<QString>& vv, const QString& str);

int          readInt(const QString& str, int pos, int len, int& value);

int          readDbl(const QString& str, int pos, int len, double& value);

void         topos(double xRec, double yRec, double zRec, double xSat, double ySat, double zSat,
                   double& rho, double& eleSat, double& azSat);

void         deg2DMS(double decDeg, int& deg, int& min, double& sec);

QString      fortranFormat(double value, int width, int prec);

void         kalman(const Matrix& AA, const ColumnVector& ll, const DiagonalMatrix& PP,
                    SymmetricMatrix& QQ, ColumnVector& xx);

double       djul(long j1, long m1, double tt);

double       gpjd(double second, int nweek) ;

void         jdgp(double tjul, double & second, long & nweek);

void         jmt (double djul, long& jj, long& mm, double& dd);

void         stripWhiteSpace(std::string& str);

double       accuracyFromIndex(int index, t_eph::e_type type);

int          indexFromAccuracy(double accuracy, t_eph::e_type type);

double       associatedLegendreFunction(int n, int m, double t);

int          factorial(int n);

/** Convert RTCM3 lock-time indicator to lock time in seconds
* depending on input message format. Returns -1 if format is
* unknown or indicator is invalid
*/
double       lti2sec(int type, int lti);


// CRC24Q checksum calculation function (only full bytes supported).
///////////////////////////////////////////////////////////////////
unsigned long CRC24(long size, const unsigned char *buf);

// RTCM3 GPS EPH encoding
//////////////////////////////////////////////////////////
#define GPSTOINT(type, value) static_cast<type>(round(value))

#define GPSADDBITS(a, b) {bitbuffer = (bitbuffer<<(a)) \
                       |(GPSTOINT(long long,b)&((1ULL<<a)-1)); \
                       numbits += (a); \
                       while(numbits >= 8) { \
                       buffer[size++] = bitbuffer>>(numbits-8);numbits -= 8;}}

#define GPSADDBITSFLOAT(a,b,c) {long long i = GPSTOINT(long long,(b)/(c)); \
                             GPSADDBITS(a,i)};

// RTCM3 GLONASS EPH encoding
//////////////////////////////////////////////////////////
#define GLONASSTOINT(type, value) static_cast<type>(round(value))
#define GLONASSADDBITS(a, b) {bitbuffer = (bitbuffer<<(a)) \
                       |(GLONASSTOINT(long long,b)&((1ULL<<(a))-1)); \
                       numbits += (a); \
                       while(numbits >= 8) { \
                       buffer[size++] = bitbuffer>>(numbits-8);numbits -= 8;}}
#define GLONASSADDBITSFLOATM(a,b,c) {int s; long long i; \
                       if(b < 0.0) \
                       { \
                         s = 1; \
                         i = GLONASSTOINT(long long,(-b)/(c)); \
                         if(!i) s = 0; \
                       } \
                       else \
                       { \
                         s = 0; \
                         i = GLONASSTOINT(long long,(b)/(c)); \
                       } \
                       GLONASSADDBITS(1,s) \
                       GLONASSADDBITS(a-1,i)}

// RTCM3 Galileo EPH encoding
//////////////////////////////////////////////////////////
#define GALILEOTOINT(type, value) static_cast<type>(round(value))
#define GALILEOADDBITS(a, b) {bitbuffer = (bitbuffer<<(a)) \
                       |(GALILEOTOINT(long long,b)&((1LL<<a)-1)); \
                       numbits += (a); \
                       while(numbits >= 8) { \
                       buffer[size++] = bitbuffer>>(numbits-8);numbits -= 8;}}
#define GALILEOADDBITSFLOAT(a,b,c) {long long i = GALILEOTOINT(long long,(b)/(c)); \
                             GALILEOADDBITS(a,i)};

// RTCM3 SBAS EPH encoding
//////////////////////////////////////////////////////////
#define SBASTOINT(type, value) static_cast<type>(round(value))
#define SBASADDBITS(a, b) {bitbuffer = (bitbuffer<<(a)) \
                       |(SBASTOINT(long long,b)&((1ULL<<a)-1)); \
                       numbits += (a); \
                       while(numbits >= 8) { \
                       buffer[size++] = bitbuffer>>(numbits-8);numbits -= 8;}}
#define SBASADDBITSFLOAT(a,b,c) {long long i = SBASTOINT(long long,(b)/(c)); \
                             SBASADDBITS(a,i)};

// RTCM3 BDS EPH encoding
//////////////////////////////////////////////////////////
#define BDSTOINT(type, value) static_cast<type>(round(value))
#define BDSADDBITS(a, b) {bitbuffer = (bitbuffer<<(a)) \
                       |(BDSTOINT(long long,b)&((1ULL<<a)-1)); \
                       numbits += (a); \
                       while(numbits >= 8) { \
                       buffer[size++] = bitbuffer>>(numbits-8);numbits -= 8;}}
#define BDSADDBITSFLOAT(a,b,c) {long long i = BDSTOINT(long long,(b)/(c)); \
                             BDSADDBITS(a,i)};

#endif
