#ifndef PARALLEL_H
#define PARALLEL_H
#include "manipulator_robots.h"

namespace eagle{
    class Parallel:public ManipulatorRobots{
        public:
            Parallel();
            Parallel(int engineNumber,double loadAmount,double cargoSpeed,double armLength,double loadCapacity);
            static int getMinCapacity(){return minCapacity;}
            static int getMinSpeed(){return minSpeed;}
            void setLoadCapacity(double loadCapacity);//redefine
            void setcargoSpeed(double cargoSpeed); //redefine

        private:
            static double minCapacity;
            static double minSpeed;

    };
}

#endif