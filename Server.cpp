/**
* @author Valentin Mercy
* @file Server.hpp
* @date 26/09/2020
* @brief Declaration of Server class which is responsible for receiving, storing and displaying data provided by the airplane cabin
*/

#include "Server.hpp"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

using namespace streamOverload;

Server::Server()
{
  m_consolActivation = true;
  m_logActivation = true;

  m_lastTemp = 0;
  m_lastHumidity = 0;
  m_lastLight = 0;
  m_lastSound = 0;
}

Server::~Server() {}

void Server::toggleConsole(bool state)
{
  m_consolActivation = state;
}

void Server::toggleLog(bool state)
{
  m_logActivation = state;
}

Server &Server::operator=(const Server &other)
{
  this->m_consolActivation = other.m_consolActivation;
  this->m_logActivation = other.m_logActivation;
  return (*this);
}

void Server::fileWrite(ofstream &flux) const
{
  if (m_logActivation)
  { 
    flux << "Date : XX/XX/XXXX -> hh:mm:ss => " << "Temp : " << m_lastTemp << " | Humidity : " << m_lastHumidity << " | Light : " << m_lastLight << " | Sound : " << m_lastSound << endl;
  }
}

void Server::consolWrite(ostream &flux) const
{
  if(m_consolActivation)
  {
    flux << "******* Last measurement : *******" << endl;
    flux << " - Temperature : " << m_lastTemp <<endl;
    flux << " - Humidity : " << m_lastHumidity <<endl;
    flux << " - Light : " << m_lastLight <<endl;
    flux << " - Sound : " << m_lastSound <<endl;
  }
}

namespace streamOverload
{
  ofstream &operator<<(ofstream &flux, const Server &Serv)
  {
    Serv.fileWrite(flux);
    return flux;
  }

  ostream &operator<<(ostream &flux, const Server &Serv)
  {
    Serv.consolWrite(flux);
    return flux;
  }
} // namespace test

void Server::dataRcv(int value_p, char sensorType_p)
{
  switch (sensorType_p)
  {
  case 'T':
    m_lastTemp = value_p;
    break;

  case 'H':
    m_lastHumidity = value_p;
    break;

  case 'L':
    m_lastLight = value_p;
    break;

  case 'S':
    m_lastSound = value_p;
    break;
  default:
    break;
  }
}
