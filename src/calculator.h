//calculator.hpp

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <iostream>
#include <cmath>
#include <string.h>

extern float calcSimpleFV(float pv, float r, int t);
extern float calcSimplePV(float fv, float r, int t);
extern float calcSimpleRate(float fv, float pv, int t);
extern float calcSimplePeriod(float fv, float pv, float r);

/*
 * A N N U I T I E S
 */
extern float calcAnnuityPV(float c, float r, int t);

//CA = Coupon payment of an Annuity
extern float calcAnnuityCouponPV(float pva, float r, int t);
extern float calcAnnuityFV(float c, float r, int t);
extern float calcAnnuityCouponFV(float fva, float r, int t);

extern float calcTAPVA(float pv, float c, float r);
extern float calcTAFVA(float fv, float c, float r);
extern float calcEAR(float apr, int m);
extern float calcAPR(float ear, int m);

//DUE
extern float calcPVADue(float c, float r, int t);
extern float calcFVADue(float c, float r, int t);
extern float calcTADuePVA(float pva, float c, float r);
extern float calcTADueFVA(float fva, float c, float r);

//perpetuity
extern float calcPerpPV(float c, float r);
extern float calcPerpRROR(float pv, float c);

//growing perpetuity
float calcGPerpPV(float c, float r, float g);
float calcGPerpRROR(float pv, float c, float g);

#endif













