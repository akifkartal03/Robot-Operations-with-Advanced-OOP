#include "manipulator_robots.h"

namespace eagle{
    ManipulatorRobots::ManipulatorRobots():Robot(not_rover,2,5.0),cargoSpeed(5.0),
            armLength(3.0),loadCapacity(10.0){
        //delegation
    }
    ManipulatorRobots::ManipulatorRobots(int engineNumber,double loadAmount,double cargoSpeed,double armLength,double loadCapacity):Robot(not_rover,engineNumber,loadAmount),
    cargoSpeed(cargoSpeed),armLength(armLength),loadCapacity(loadCapacity){
        if (loadAmount > this->loadCapacity)
        {
            cout << "load amount can not be bigger than load capacity" << endl;
            exit(-1);
        }
    }
    double ManipulatorRobots::getArmLength() const{
        return armLength;
    }
    double ManipulatorRobots::getcargoSpeed() const{
        return cargoSpeed;
    }
    double ManipulatorRobots::getLoadCapacity() const{
        return loadCapacity;
    }
    void ManipulatorRobots::setArmLength(double armLength){
        if(armLength<=0){
            cout << "arm length must be bigger than 0" << endl;
            exit(-1);
        }
        this->armLength = armLength;
    }
    void ManipulatorRobots::setcargoSpeed(double cargoSpeed){
        if(cargoSpeed<=0){
            cout << "cargo speed must be bigger than 0" << endl;
            exit(-1);
        }
        this->cargoSpeed = cargoSpeed;
    }
    void ManipulatorRobots::setLoadCapacity(double loadCapacity){
        if(loadCapacity <= 0){
            cout << "load capacity must be bigger than 0" << endl;
            exit(-1);
        }
        this->loadCapacity = loadCapacity;
    }
    void ManipulatorRobots::setLoadAmount(double loadAmount){
        if(loadAmount <= 0){
            cout << "load amount must be bigger than 0" << endl;
            exit(-1);
        }
        if (loadAmount > this->loadCapacity)
        {
            cout << "load amount can not be bigger than load capacity" << endl;
            exit(-1);
        }

        this->loadAmount = loadAmount;
    }
}