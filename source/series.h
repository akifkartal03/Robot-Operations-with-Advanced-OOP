#ifndef SERIES_H
#define SERIES_H
#include "manipulator_robots.h"

namespace eagle{
    class Series:public ManipulatorRobots{
        public:
            Series();
            Series(int engineNumber,double loadAmount,double cargoSpeed,double armLength,double loadCapacity);

    };
}

#endif