#include "rover.h"

namespace eagle
{
    Rover::Rover():Robot(crawler,2,numeric_limits<double>::infinity()),speed(1.0),
        speedRate(1),isJumping(true){
        //delegation
    }
    Rover::Rover(double speed,int speedRate,bool isJumping,int engineNumber):Robot(crawler,engineNumber,numeric_limits<double>::infinity()),speed(speed),
        speedRate(speedRate),isJumping(isJumping){


    }
    int Rover::getSpeedRate() const{

        return speedRate;
    }
    double Rover::getSpeed() const{
        return speed;
    }
    bool Rover::getIsJumping() const {
        return isJumping;
    }
    void Rover::setSpeed(double speed){
        if(speed<=0){
            cout << "speed must be bigger than 0" << endl;
            exit(-1);
        }
        this->speed = speed;
    }
    void Rover::setIsJumping(bool isJump){
        this->isJumping=isJump;
    }

}
