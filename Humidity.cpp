#include "Humidity.h"

Humidity::Humidity() : m_humidity(0)
{

}

Humidity::Humidity(const Humidity& h) : m_humidity(h.m_humidity)
{

}

Humidity::Humidity(float h) : m_humidity(h)
{

}

Humidity::~Humidity()
{
    // Destructeur vide car aucune zone mémoire allouée
}

void Humidity::operator=(const Humidity& source)
{
    this->m_humidity = source.m_humidity;
}

float Humidity::getHumidity()
{
    return m_humidity;
}

void Humidity::setHumidity(float newHum)
{
    m_humidity = newHum;
}
