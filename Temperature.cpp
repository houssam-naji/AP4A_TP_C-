#include <iostream>
#include "Temperature.hpp"

float Temperature::getData()
{
    return m_temperature;
}

void Temperature::aleaGenVal()
{
    m_temperature = rand()%10 +15; /// Température aléatoire entre 15 et 25°C
}
