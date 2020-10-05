/**
* @author Valentin Mercy
* @file Humidity.hpp
* @date 26/09/2020
* @brief Definition of Humidity class derivating from Sensor base class
*/
#include "Sensor.hpp"

#ifndef HUMIDITY_HPP
#define HUMIDITY_HPP

/**
 * @class Humidity
 * @brief this class is derivating from Sensor base class
 */

class Humidity : public Sensor
{
private:
  //TODO: define a specific type
public:
  Humidity();
  ~Humidity();
};

Humidity::Humidity()
{
}

Humidity::~Humidity()
{
}

#endif // HUMIDITY_HPP
