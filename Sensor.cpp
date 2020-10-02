/**
 *@author Hugo Audran
 *@file Server.hpp
 *@date 20/09/2020
 *@brief Implementation de la classe sensor classe mère de Temperature, Humidity, Sound et Light
 */

#include <iostream>
#include "Sensor.hpp"

using namespace std;

Sensor::Sensor(){}

Sensor::Sensor(const Sensor&){} /// Inutile sensor n'a aucun attribut dans mon programme, est défini pour éviter les erreurs de compilation

Sensor::~Sensor(){}

Sensor& Sensor::operator=(const Sensor &  sensor_)
{
    return *this;               /// Comme précédemment, il n'y a rien à recopier/affecter
}

float Sensor::getData()
{
    return 0;    /// La fonction est redéfinie par chaque classe fille
}

void Sensor::aleaGenVal()
{
}               /// La fonction est redéfinie par chaque classe fille
