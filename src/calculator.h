//calculator.hpp

#ifndef CALCULATOR_H_
#define CALCULATOR_H_

#include <iostream>
#include <cmath>
#include <string.h>

extern float calcFV(float pv, float r, int t);
extern float calcPV(float fv, float r, int t);
extern float calcRate(float fv, float pv, int t);
extern float calcPeriod(float fv, float pv, float r);

/*
 * A N N U I T I E S
 */
extern float calcPVA(float c, float r, int t);

//CA = Coupon payment of an Annuity
extern float calcCouponPVA(float pva, float r, int t);
extern float calcFVA(float c, float r, int t);
extern float calcCouponFVA(float fva, float r, int t);
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













