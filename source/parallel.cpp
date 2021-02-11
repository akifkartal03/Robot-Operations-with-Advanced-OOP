#include "parallel.h"

namespace eagle
{
    Parallel::Parallel() : ManipulatorRobots()
    {
        if (minSpeed > 5.0)
        {
            minSpeed = 5.0;
        }
        if (minCapacity > 10.0)
        {

            minCapacity = 10.0;
        }
    }
    Parallel::Parallel(int engineNumber, double loadAmount, double cargoSpeed, double armLength, double loadCapacity) : ManipulatorRobots(engineNumber, loadAmount, cargoSpeed, armLength, loadCapacity)
    {
        if (minSpeed > cargoSpeed)
        {
            minSpeed = cargoSpeed;
        }
        if (minCapacity > loadCapacity)
        {

            minCapacity = loadCapacity;
        }
    }
    void Parallel::setcargoSpeed(double cargoSpeed)
    {
        if (cargoSpeed <= 0)
        {
            cout << "cargo speed must be bigger than 0" << endl;
            exit(-1);
        }
        if (minSpeed > cargoSpeed)
        {
            minSpeed = cargoSpeed;
        }
        this->cargoSpeed = cargoSpeed;
    }
    void Parallel::setLoadCapacity(double loadCapacity)
    {
        if (loadCapacity <= 0)
        {
            cout << "load capacity must be bigger than 0" << endl;
            exit(-1);
        }
        if (minCapacity > loadCapacity)
        {

            minCapacity = loadCapacity;
        }
        this->loadCapacity = loadCapacity;
    }

} // namespace eagle
