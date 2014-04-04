#include "TempConvLib.h"

float ConvThermocouple(float Signal,float ColdTempComp){
    
  return (Signal*TC_K_A + Signal * ( TC_K_B + Signal * (TC_K_C + Signal * TC_K_C)))-ColdTempComp; 

}

float ConvPt100(float Resistance, float Base){
 
  float R=Resistance;
  
  if (Resistance<=RTD_Rmin) { 
    Resistance=(RTD_Rmin-Resistance)/RTD_Rbase;
    Resistance=1-Resistance*Resistance*Resistance;
  }
  
  return   RTD_T0 +(sqrt((RTD_A*RTD_A)+4*RTD_B*(R/RTD_R0-1)*Resistance)-RTD_A)/(2*RTD_B)-Base;

}
