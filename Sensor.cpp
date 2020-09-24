/**
 *@author Hugo Audran
 *@file Server.hpp
 *@date 20/09/2020
 *@brief Implementation de la classe sensor ayant pour but de collecter les données au seins de l'avion.
 */

#include <iostream>
#include "Sensor.hpp"

using namespace std;

Sensor::Sensor (float temperature, float humidity, int sound, bool light): m_temperature(temperature), m_humidity(humidity), m_sound(sound), m_light(light)
{
}

Sensor::Sensor(){}

Sensor::Sensor(const Sensor&){}

Sensor::~Sensor(){}

Sensor & Sensor::operator=(const Sensor &  sensor_)
{
    if (&sensor_ != this)
    {
        m_temperature = sensor_.m_temperature;
        m_humidity= sensor_.m_humidity;
        m_sound = sensor_.m_sound;
        m_light = sensor_.m_light;
    }
    return *this;
}
