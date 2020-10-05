/**
* @author rixte_marine
* @file Server.cpp
* @date 30/09/2020
* @brief Permet de recevoir, de stocker, et d'afficher des données qui proviennent des capteurs
*/

 #include "Server.hpp"
using namespace std;

Server::Server()
{
  this->m_consolActivation = true;
  this->m_logActivation = true;

  this->m_temperature = 1.0;
  this->m_humidity = 2.0;
  this->m_light = 3.0;
  this->m_sound = 4.0;
}

Server::Server(Server const &serv)
{
  this->m_consolActivation = serv.m_consolActivation;
  this->m_logActivation = serv.m_logActivation;
}

Server::~Server()
{

}

ostream& operator<<(ostream& flux, Server const& serv )
{
  serv.consolWrite(flux);
  return flux;
}

ofstream& operator<<(ofstream& flux, Server const& serv )
{
  serv.fileWrite(flux);
  return flux;
}

Server&  Server::operator=(Server& serv)
{
  if (this != &serv)
  {
    m_consolActivation = serv.m_consolActivation;
    m_logActivation = serv.m_logActivation;
  }
  return *this;
}

void Server::fileWrite(ofstream& flux) const
{
  if (m_logActivation)
  {
    flux << "Température : " << this->m_temperature << endl;
    flux << "Humidité : " << this->m_humidity << endl;
    flux << "Lumière : " << this->m_light << endl;
    flux << "Son : " << this->m_sound << endl;
  }
}

void Server::consolWrite(ostream& flux) const
{
  if (m_consolActivation)
  {
    flux << "Température : " << this->m_temperature << endl;
    flux << "Humidité : " << this->m_humidity << endl;
    flux << "Lumière : " << this->m_light << endl;
    flux << "Son : " << this->m_sound << endl;
  }
}

void Server::dataRcv(float value_p, char sensorType_p)
{
  switch (sensorType_p)
  {
  case 'T':
    this->m_temperature = value_p;
    break;

  case 'H':
    this->m_humidity = value_p;
    break;

  case 'L':
    this->m_light = value_p;
    break;

  case 'S':
    this->m_sound = value_p;
    break;
  default:
    break;
  }
}
