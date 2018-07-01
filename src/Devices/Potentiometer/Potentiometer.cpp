#include <Arduino.h>
#include "Potentiometer.h"

namespace devuino
{
    Potentiometer::Potentiometer(T pin, bool debounce, int bitresolution)
        : pin(pin), InputAnalog(bitresolution, debounce)
    {
        this->pin.initiate(pin::Mode::InputAnalog);
    }

    int Potentiometer::value()
    {
     /* if (debounce)
        {
            
        }
        else */
        {
            return pin.analogread();
        }
    }
}