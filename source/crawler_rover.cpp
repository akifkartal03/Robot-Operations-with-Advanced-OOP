#include "crawler_rover.h"

namespace eagle
{
    CrawlerRover::CrawlerRover() : Rover(1, 2, true, 2), crawlerNumber(4)
    {
        //delegation
    }
    CrawlerRover::CrawlerRover(int crawlerNumber) : Rover(1, 2, true, 2), crawlerNumber(crawlerNumber)
    {
    }
    CrawlerRover::CrawlerRover(int crawlerNumber, int engineNumber, double speed) : Rover(speed, 2, true, engineNumber), crawlerNumber(crawlerNumber)
    {
    }
    double CrawlerRover::findTimeOfJumping()
    {
        return engineNumber * 3;
    }

} // namespace eagle
