#ifndef ROVER_H
#define ROVER_H
#include "robot.h"

namespace eagle{
    class Rover:public Robot{
        public:
            Rover();
            Rover(double speed,int speedRate,bool isJumping,int engineNumber);
            int getSpeedRate() const;
            double getSpeed() const;
            bool getIsJumping() const ;
            void setSpeed(double speed);
            void setIsJumping(bool isJump);
            virtual double findTimeOfJumping() = 0;
        protected:
            double speed;
            int speedRate;
            bool isJumping;

    };



}

#endif