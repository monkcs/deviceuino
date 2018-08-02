#ifndef DISTANCE_H
#define DISTANCE_H

namespace devuino
{
    class Distance
    {
      public:
        float distance(Imperial unit);
        float distance(SI unit);
        virtual float distance() = 0;
    };

    enum class Imperial
    {
        Nautical,
        Mile,
        Furlong,
        Chain,
        Yard,
        Foot,
        Inch,
        Thou
    };

    enum class SI
    {
        Giga,
        Mega,
        Kilo,
        Hekto,
        Deka,
        Metre,
        Deci,
        Centi,
        Milli,
        Micro,
        Nano
    };
}
#endif
