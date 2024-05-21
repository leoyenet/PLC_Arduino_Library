#include "PLC.h"

PLC plc;

bool outputState = false;

void setup(){
  plc.init(); //Nastavi PLC vhode in izhode
}
void loop(){
  bool setTipka = plc.I3();
  bool resetTipka = plc.I4();

  if (resetTipka){ // true ce je set tipka stisnjena
    outputState = true;
  } else if (setTipka){ // false ce reset tipka stisnjena
    outputState = false; 
  }
  
  plc.Q2(outputState); // nastavi to stanje

}
  
