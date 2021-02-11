#include "series.h"

namespace eagle
{
    Series::Series() : ManipulatorRobots()
    {
    }
    Series::Series(int engineNumber, double loadAmount, double cargoSpeed, double armLength, double loadCapacity) : ManipulatorRobots(engineNumber, loadAmount, cargoSpeed, armLength, loadCapacity)
    {
    }

} // namespace eagle
