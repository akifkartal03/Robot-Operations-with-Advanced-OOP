#ifndef SPIDER_ROVER_H
#define SPIDER_ROVER_H
#include "robot.h"
#include "rover.h"

namespace eagle{
    class SpiderRover:public Rover{
        public:
            SpiderRover();
            SpiderRover(int legNumber);
            SpiderRover(int legNumber,int engineNumber,double speed);

        protected:
            int legNumber;
        private:
            double findTimeOfJumping() override;
    };

}

#endif