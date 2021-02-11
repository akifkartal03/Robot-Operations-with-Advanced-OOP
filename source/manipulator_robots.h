#ifndef MANIPULATOR_ROBOTS_H
#define MANIPULATOR_ROBOTS_H
#include "robot.h"
namespace eagle{
    class ManipulatorRobots:Robot{
        public:
            ManipulatorRobots();
            ManipulatorRobots(int engineNumber,double loadAmount,double cargoSpeed,double armLength,double loadCapacity);
            double getcargoSpeed() const;
            void setcargoSpeed(double cargoSpeed);
            double getArmLength() const;
            void setArmLength(double armLength);
            double getLoadCapacity() const;
            void setLoadCapacity(double loadCapacity);
            void setLoadAmount(double loadAmount);//redefine
        protected:
            double cargoSpeed;
            double armLength;
            double loadCapacity;
    };
}


#endif