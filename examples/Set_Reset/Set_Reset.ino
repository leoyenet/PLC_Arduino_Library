#include "PLC.h"

PLC plc;

bool outputState = false;

void setup(){
  plc.init(); //Nastavi PLC vhode in izhode
}
void loop(){
  bool setTipka = plc.I3();
  bool resetTipka = plc.I4();

  if (setTipka && !resetTipka){ // true ce je set tipka stisnjena ampak reset tipka ni
    outputState = true;
  } else if (!setTipka && resetTipka){ // false ce tipka set ni stisnjena reset tipka pa je
    outputState = false; 
  }
  
  plc.Q2(outputState); // nastavi to stanje

}
  
