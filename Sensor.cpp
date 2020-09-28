#include "Sensor.h"

#include <iostream>
#include <stdlib.h>

Sensor::Sensor(): Temperature(), Humidity(),Sound(), Light()
{

}

Sensor::Sensor(const Sensor& s) : Temperature(s.m_dataTemperature), Humidity(s.m_dataHumidity), Sound(s.m_dataSound), Light(s.m_dataLight)
{

}

Sensor::Sensor(Temperature t, Humidity h, Sound s, Light l) : Temperature(t), Humidity(h), Sound(s), Light(l)
{

}


Sensor::~Sensor()
{
    // Destructeur vide car aucune zone mémoire allouée
}

Sensor Sensor::getData()
{
    Sensor tmp;

    tmp.m_dataTemperature = getTemperature();
    tmp.m_dataHumidity = getHumidity();
    tmp.m_dataSound = getSound();
    tmp.m_dataLight = getLight();

    return tmp;
}
