#include "Switch.h"
#include <Arduino.h>

namespace devuino
{
    Switch::Switch(T pin) : pin(pin)
    {
        this->pin.initiate(pin::Mode::OutputDigital);
        off();
    }

    Switch::~Switch()
    {
        off();
    }

    void Switch::off()
    {
        change(false);
    }

    void Switch::on()
    {
        change(true);
    }

    void Switch::change(bool state)
    {
        active = state;
        pin.digitalwrite(state);
    }
}