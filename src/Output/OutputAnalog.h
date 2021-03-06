#ifndef OUTPUTANALOG_H
#define OUTPUTANALOG_H

#include "OutputDigital.h"
#include "../Resolution/Resolution.h"

namespace devuino
{
    class OutputAnalog : public OutputDigital
    {
      public:
        OutputAnalog(const int bitresolution);
        virtual void analog(const int value) = 0;

      protected:
        const Resolution bitsize;
    };
}

#endif
