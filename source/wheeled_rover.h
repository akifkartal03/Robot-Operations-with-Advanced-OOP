#ifndef WHEELED_ROVER_H
#define WHEELED_ROVER_H
#include "robot.h"
#include "rover.h"

namespace eagle
{
    class WheeledRover : public Rover
    {
    public:
        WheeledRover();
        WheeledRover(int wheelNumber);
        WheeledRover(int wheelNumber, int engineNumber, double speed);
        double findTimeOfJumping() override;

    protected:
        int wheelNumber;
    };

} // namespace eagle

#endif