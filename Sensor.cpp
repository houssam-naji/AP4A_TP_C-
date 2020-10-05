/**
* @author Valentin Mercy
* @file Sensor.cpp
* @date 26/09/2020
* @brief Implementation of Sensor base class
*/

#include "Sensor.hpp"

#include <time.h>
#include <cstdlib>

Sensor::Sensor()
{
  m_value = aleaGenVal();
}

Sensor::Sensor(const Sensor& other)
{

}

Sensor::Sensor(const int value_p)
{
  this->m_value = value_p;
}

Sensor::~Sensor()
{

}

int Sensor::aleaGenVal()
{
  srand(time(0));
  return m_minValue+rand()%(m_maxValue-m_minValue);
}