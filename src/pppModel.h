#ifndef PPPMODEL_H
#define PPPMODEL_H

#include <math.h>
#include <newmat.h>
#include "bnctime.h"
#include "t_prn.h"
#include "satObs.h"
#include "bncutils.h"

//*******************************
//* 		Modified by Chaiyut (Using in t_tides)
//*******************************
#include <sstream>
#include <unistd.h>
// ********************************
namespace BNC_PPP {


/*******************************
 * 		Modified by Chaiyut (Using in t_tides)
 ********************************/
typedef struct {        /* earth rotation parameter data type */
    double mjd;         /* mjd (days) */
    double xp,yp;       /* pole offset (rad) */
    double xpr,ypr;     /* pole offset rate (rad/day) */
    double ut1_utc;     /* ut1-utc (s) */
    double lod;         /* length of day (s/day) */
} erpd_t;

typedef struct {        /* earth rotation parameter type */
    int n,nmax;         /* number and max number of data */
    erpd_t *data;       /* earth rotation parameter data */
} erp_t;

/*++++++++++++++++++++*/

class t_astro {
 public:
  static ColumnVector Sun(double Mjd_TT);
  static ColumnVector Moon(double Mjd_TT);
  static Matrix rotX(double Angle);
  static Matrix rotY(double Angle);
  static Matrix rotZ(double Angle);

 private:
  static const double RHO_DEG;
  static const double RHO_SEC;
  static const double MJD_J2000;

  static double GMST(double Mjd_UT1);
  static Matrix NutMatrix(double Mjd_TT);
  static Matrix PrecMatrix (double Mjd_1, double Mjd_2);
};

class t_tides {
 public:
  t_tides(std::string blqfile, std::string cwd);
  ~t_tides() {}
  ColumnVector displacement(const bncTime& time, const ColumnVector& xyz);
  
 /* Modified by Chaiyut 02-JUN-2017*/
 /*++++++++++++++++++++++++++++++++*/
	void tide_oload(gtime_t tut, const double* odisp, double* denu);
	ColumnVector tideOcean(const bncTime& time, const ColumnVector& xyz);
	
	int readblq(const char* file, const char* sta, double* odisp);
	
	int readblqrecord(FILE* fp, double* odisp);

	double 	_odisp[6*11];
	bool 	_blqfile;		
 /*++++++++++++++END ++++++++++++++++++*/  
 
 
   
 private:
 /* Modified by Chaiyut 02-JUN-2017*/
 /*++++++++++++++++++++++++++++++++*/
	static const double RE_WGS84;
	static const double FE_WGS84;
	static const double AU;
	static const double GME;
	static const double GMS;
	static const double GMM;  
	static const std::string FILEPATH;

 /*++++++++++++++END ++++++++++++++++++*/  
  double       _lastMjd;
  ColumnVector _xSun;
  ColumnVector _xMoon;
  double       _rSun;
  double       _rMoon;
};

class t_windUp {
 public:
  t_windUp();
  ~t_windUp() {};
  double value(const bncTime& etime, const ColumnVector& rRec, t_prn prn,
               const ColumnVector& rSat);
 private:
  double lastEtime[t_prn::MAXPRN+1];
  double sumWind[t_prn::MAXPRN+1];
};

class t_tropo {
 public:
  static double delay_saast(const ColumnVector& xyz, double Ele);
};

class t_iono {
 public:
  t_iono();
  ~t_iono();
  double stec(const t_vTec* vTec, double signalPropagationTime,
      const ColumnVector& rSat, const bncTime& epochTime,
      const ColumnVector& xyzSta);
 private:
  double vtecSingleLayerContribution(const t_vTecLayer& vTecLayer);
  void piercePoint(double layerHeight, double epoch, const double* geocSta,
      double sphEle, double sphAzi);
  double _psiPP;
  double _phiPP;
  double _lambdaPP;
  double _lonS;


};

}

#endif
