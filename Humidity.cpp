#include <iostream>
#include "Humidity.hpp"

float Humidity::getData()
{
    return m_humidity;
}

void Humidity::aleaGenVal()
{
    m_humidity = rand()%20 +40; /// Taux d'humidité aléatoire entre 40 et 60%
}



