#ifndef TempConvLib_H
#define TempConvLib_H


#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

/* Thermocouple K constants */
#define TC_K_A 2.508355e-2
#define TC_K_B 7.860106e-8
#define TC_K_C -2.503131e-10
#define TC_K_D 8.315270e-14

/* Pt100 constants */
/* Calculation based on this work http://lpm.epfl.ch/files/content/sites/lpm/files/shared/enseignement/divers/060914%20Mesure%20de%20temp%C3%A9rature%20Pt100-Pt1000.pdf */
#define RTD_A  3.9083e-3
#define RTD_B -5.775e-7
#define RTD_Rmin 113
#define RTD_Rbase 408
#define RTD_R0 100
#define RTD_T0 273.15 


float ConvThermocouple(float Signal,float ColdTempComp);

float ConvPt100(float Resistance, float Base);


#endif
