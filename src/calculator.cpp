#include <iostream>
using namespace std;
#include <cmath>
#include <cassert>
#include <string.h>
//#include <tgmath>
//#include <math>
/*
 * SIMPLE:
 * FV = PV * (1+R)^T (ordinary)
 * PV = FV / (1+R)^T
 * r = (FV/PV)^(1/t) -1
 * t = ln(FV/PV) / ln(1+r)
 *
 * ANNUITY
 * PVA = (C / r) * (1-(1/(1+r)^t))
 * C = (PVA * r) / (1-(1/(1+r)^t))
 */

//CHECK:
// cpp maths, floating point and exponents

float calcSimpleFV(float pv, float r, int t){
   return (pv * std::pow((1+r), t));
}

float calcSimplePV(float fv, float r, int t){
   return (fv / std::pow(1+r,t));
}

float calcSimpleRate(float fv, float pv, int t){
   return (std::pow((fv / pv), (1.0f/t)) - 1);
}

//float because we could either round up or down (context dependent)
float calcSimplePeriod(float fv, float pv, float r){
   return log(fv/pv) / log(1+r);
}


/*
 * A N N U I T I E S
 */
float calcAnnuityPV(float c, float r, int t){
   return (c / r) * (1-(1/std::pow((1+r),t)));
}

//CA = Coupon payment of an Annuity
float calcAnnuityCouponPV(float pva, float r, int t){
   return (pva * r) / (1-(1/std::pow((1+r),t)));
}

float calcAnnuityFVA(float c, float r, int t){
   return c * (std::pow((1+r),t)/r);
}

float calcAnnuityCouponFV(float fva, float r, int t){
   return (fva * r) / (std::pow((1+r),t) - 1);
}

float calcTAPVA(float pv, float c, float r){
   return log((c/(c-(r*pv)))) / log(1+r);
}

float calcTAFVA(float fv, float c, float r){
   return log(1+((r*fv)/c)) / log(1+r);
}

float calcEAR(float apr, int m){
   return std::pow((1+(apr/m)),m)-1;
}

float calcAPR(float ear, int m){
   return m * (std::pow((1+ear),1/m) -1);
}

//annuity due
float calcPVADue(float c, float r, int t){
   return (1+r) * c * ((1-(1/(std::pow(1+r,t))))/r);
}

float calcFVADue(float c, float r, int t){
   return (1+r) * c * ((std::pow(1+r,t) - 1)/r);
}

float calcTADuePVA(float pva, float c, float r){
   return log((c*(1+r))/(c*(1+r)-r*pva)) / log(1+r);
}

float calcTADueFVA(float fva, float c, float r){
   return log(1+((r*fva)/((1+r)*c)))/log(1+r);
}

//perpetuity

float calcPerpPV(float c, float r){
   return c/r;
}

float calcPerpRROR(float pv, float c){
   return (c / pv);
}

//growing perpetuity

float calcGPerpPV(float c, float r, float g){
   return (c/(r-g));
}

float calcGPerpRROR(float pv, float c, float g){
   return (c/pv)+g;
}












