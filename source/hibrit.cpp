#include "hibrit.h"

namespace eagle{
    Hibrit::Hibrit():Robot(hibrit,2,5.0){
        this->armLength = 3.0;
        this->cargoSpeed = 5.0;
        this->loadCapacity = 10.0;
    }

    double Hibrit::getFocusTime() const{
        return focusTime;
    }
    double Hibrit::getChangeTime() const{
        return changeTime;
    }
    void Hibrit::setChangeTime(double changeTime){
        if(changeTime<=0){
            cout << "change time must be bigger than 0" << endl;
            exit(-1);
        }
        this->changeTime = changeTime;
    }
    void Hibrit::setFocusTime(double focusTime){
        if(focusTime<=0){
            cout << "focus time must be bigger than 0" << endl;
            exit(-1);
        }
        this->focusTime = focusTime;
    }
}