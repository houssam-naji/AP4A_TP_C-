/**
* @author Valentin Mercy
* @file Sensor.hpp
* @date 26/09/2020
* @brief Definition of Sensor base class
*/

#ifndef SENSOR_HPP
#define SENSOR_HPP

/**
 * @class Sensor
 * @brief this class is the base class from which temperature, light, sound and humidity classes derivate
 */

class Sensor
{
private:
  int m_value; //TODO: use a template to allow use of undetermined types
  int m_minValue;
  int m_maxValue;
public:
  Sensor(/* args */);
  Sensor(const Sensor& other);
  Sensor(const int value_p); //TODO: use template
  ~Sensor();
  int getData();

protected:
  int aleaGenVal();
};



#endif // SENSOR_HPP