/**
* @author Valentin Mercy
* @file Sensor.cpp
* @date 26/09/2020
* @brief Implementation of Sensor base class
*/
#include <iostream>

#include "Sensor.hpp"

#include <ctime>
#include <cstdlib>

Sensor::Sensor()
{

  m_minValue = 0; //TODO: adapt this value to each sensor type
  m_maxValue = 100; //TODO: adapt this value to each sensor type
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
  int random = m_minValue+rand()%(m_maxValue-m_minValue);
  std::cout << "RANDOM : " << random;
  return random;
}

int Sensor::getData()
{
  return m_value;
}