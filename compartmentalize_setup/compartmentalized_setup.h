#ifndef Compartmentalized_Setup_h
#define Compartmentalized_Setup_h
#include "Arduino.h"

class Compartmentalized_Setup
{
    public:
        Morse(int pin);
        void begin();
        void dot();
        void dash();
    private:
        int _pin;
};

#endif