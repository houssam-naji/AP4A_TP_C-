/**
* @author Loïc_Hug
* @file Sensor.cpp
* @date 03/10/2020
* @brief La classe ”Sensor” représente la classe mère sur laquelle sont basées les classes de nos
capteurs.
*/

#include "../headers/Sensor.hpp"

using namespace std;

Sensor::Sensor()
{
    m_dataName = "no name";
    m_sensorType = "none";
}

Sensor::Sensor(string dataName_p)
{
    m_dataName = dataName_p;
}

Sensor::Sensor(const Sensor& sensor_p)
{
    this->m_dataName = sensor_p.m_dataName;
}

void Sensor::setDataName(string dataName_p)
{
    m_dataName = dataName_p;
}

string Sensor::getDataName()
{
    return m_dataName;
}

void Sensor::setSensorType(string sensorType_p)
{
    m_sensorType = sensorType_p;
}

string Sensor::getSensorType()
{
    return m_sensorType;   
}

Sensor::~Sensor()
{
}