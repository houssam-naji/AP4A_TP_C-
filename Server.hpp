/**
* @author Valentin Mercy
* @file Server.hpp
* @date 26/09/2020
* @brief Definition of Server class which is responsible for receiving, storing and displaying data provided by the airplane cabin
*/

#include <iostream>

#ifndef SERVER_HPP
#define SERVER_HPP

/**
 * @class Server
 * @brief this class is responsible for receiving, storing and displaying data provided by the airplane cabin
 */
namespace test
{
  
 // namespace test

class Server
{
public:
  Server();
  Server(const Server &other);
  virtual ~Server();
  Server &operator=(const Server &other);
  void dataRcv(int value_p, char sensorType_p);
  void toggleConsole(bool state);
  void toggleLog(bool state);
  //void setFileName(string fileName);
  friend std::ostream &operator<<(std::ostream &flux, const Server &Serv);
  friend std::ofstream &operator<<(std::ofstream &flux, const Server &Serv);

private:
  void fileWrite(std::ofstream& flux) const; //TODO: make private again
  void consolWrite(std::ostream& flux) const; //TODO: make private again
  
  //string m_filename;
  bool m_consolActivation = true;
  bool m_logActivation = true;

  int m_lastTemp;
  int m_lastHumidity;
  int m_lastLight;
  int m_lastSound;
};

}
#endif // SERVER_HPP