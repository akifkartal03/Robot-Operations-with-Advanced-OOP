#ifndef CRAWLER_ROVER_H
#define CRAWLER_ROVER_H
#include "robot.h"
#include "rover.h"

namespace eagle{
    class CrawlerRover:public Rover{
        public:
            CrawlerRover();
            CrawlerRover(int crawlerNumber);
            CrawlerRover(int crawlerNumber,int engineNumber,double speed);
            double findTimeOfJumping() override;
        protected:
            int crawlerNumber;
    };

}

#endif