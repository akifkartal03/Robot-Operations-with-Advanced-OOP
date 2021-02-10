#include "wheeled_rover.h"

namespace eagle
{
    WheeledRover::WheeledRover():Rover(1,1,true,2),wheelNumber(4){
        //delegation
    }
    WheeledRover::WheeledRover(int wheelNumber):Rover(1,1,true,2),wheelNumber(wheelNumber){


    }
    WheeledRover:: WheeledRover(int wheelNumber,int engineNumber,double speed):Rover(speed,1,true,engineNumber),wheelNumber(wheelNumber){

    }
    double WheeledRover::findTimeOfJumping(){
        return engineNumber*0.5;
    }


}
