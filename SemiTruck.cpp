#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& name) : Vehicle(name) {}
SemiTruck::~SemiTruck() {}

void SemiTruck::drive()
{
    setSpeed(50);
}

void SemiTruck::pullOver()
{
    setSpeed(0);
}
