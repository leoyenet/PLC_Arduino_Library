#ifndef PLC_h
#define PLC_h
#include "Arduino.h"

class PLC
{
  public:
    PLC(); // Constructor
    void init(); // Initialization function to replace setup
    bool I0();
    bool I1();
    bool I2();
    bool I3();
    bool I4();
    bool I5();
    bool I6();
    bool I7();
    void Q0(bool value);
    void Q1(bool value);
    void Q2(bool value);
    void Q3(bool value);
    void LED(bool value);
};

#endif
