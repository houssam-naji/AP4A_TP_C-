/**
* @author Valentin Mercy
* @file Server.hpp
* @date 26/09/2020
* @brief Definition of Scheduler class. Its role is to communicate data from sensors to the server at a certain frequency
*/

#include "Server.hpp"
#include "Sensor.hpp"

#ifndef SCHEDULER_H
#define SCHEDULER_H

#define MIN_FREQ 1
#define MAX_FREQ 100

/**
 * @class Scheduler
 * @brief this class is responsible for communicating data provided by sensors to the server at a certain frequency
*/

class Scheduler
{
private:
  int m_frequency; //in Hertz : a frequency of 2 will result in Scheduler triggering Server 2 times per second
  streamOverload::Server serv;
  Sensor test; //TODO: add arrays of sensors for each sensor type
  
public:
  Scheduler();
  virtual ~Scheduler();
  void setFrequency();
  /**
   * @brief collect data from sensors and transfer them to the server
   **/
  void processData();
};

#endif //SCHEDULER_HPP