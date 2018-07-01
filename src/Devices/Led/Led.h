#ifndef LED_H
#define LED_H

#include "Light.h"
#include "OutputDigital.h"
#include <Arduino.h>

namespace devuino
{
    template <typename T>
    class Led : public Light, public OutputDigital
    {
      public:
        Led(T pin, int bitresolution = 8);
        ~Led();

        void brightness(int value) override;
        void off() override;
        void on() override;

      protected:
        T pin;
    };
}

#endif