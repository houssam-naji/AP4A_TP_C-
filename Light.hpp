/**
* @author Valentin Mercy
* @file Light.hpp
* @date 26/09/2020
* @brief Definition of light class derivating from Sensor base class
*/
#include "Sensor.hpp"

#ifndef LIGHT_HPP
#define LIGHT_HPP

/**
 * @class Light
 * @brief this class is derivating from Sensor base class
 */

class Light : public Sensor
{
private:
  //TODO: define a specific type
public:
  Light();
  ~Light();
};

Light::Light()
{
}

Light::~Light()
{
}

#endif // LIGHT_HPP
