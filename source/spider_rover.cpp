#include "spider_rover.h"

namespace eagle
{
    SpiderRover::SpiderRover() : Rover(1, 3, false, 2), legNumber(8)
    {
        //delegation
    }
    SpiderRover::SpiderRover(int legNumber) : Rover(1, 3, false, 2), legNumber(legNumber)
    {
    }
    SpiderRover::SpiderRover(int legNumber, int engineNumber, double speed) : Rover(speed, 3, false, engineNumber), legNumber(legNumber)
    {
    }
    double SpiderRover::findTimeOfJumping()
    {
        return 0;
    }

} // namespace eagle
