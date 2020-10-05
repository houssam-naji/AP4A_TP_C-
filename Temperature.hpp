/**
* @author Valentin Mercy
* @file Temperature.hpp
* @date 26/09/2020
* @brief Definition of temperature class derivating from Sensor base class
*/
#include "Sensor.hpp"

#ifndef TEMPERATURE_HPP
#define TEMPERATURE_HPP

/**
 * @class Temperature
 * @brief this class is derivating from Sensor base class
 */

class Temperature : public Sensor
{
private:
  /* data */
public:
  Temperature();
  ~Temperature();
};

Temperature::Temperature()
{
}

Temperature::~Temperature()
{
}

#endif // TEMPERATURE_HPP
