/**
 * @author Antoine MOYSE
 * @file ClasseServer.cpp
 * @date 28/09/2020
 * @brief Surcharge des opérateurs = et << vers console et fichier
 */

#include "ClasseServer.h"
#include <ostream>
#include <iostream>
#include <fstream>
using namespace std;

float Server::getTemperature()
{
  return s_temperature;
}

float Server::getHumidity()
{
  return s_humidity;
}

int Server::getSound()
{
  return s_sound;
}

bool Server::getLight()
{
  return s_light;
}

Server& Server::operator=(const Server& Copie_Server)
{
  this->s_temperature=Copie_Server.s_temperature;
  this->s_humidity=Copie_Server.s_humidity;
  this->s_sound=Copie_Server.s_sound;
  this->s_light=Copie_Server.s_light;
  return(*this);
}

std::ostream& operator<<(std::ostream& os, Server& LeServ)
{
  os << "Temperature : " << LeServ.getTemperature() << " Humidité : " << LeServ.getHumidity() << " Son : " << LeServ.getSound() << " Lumière : " << LeServ.getLight()<< "\n";
  return os;
}

std::ofstream& operator<<(std::ofstream& out , Server& LeServ)
{
  out << "Temperature : " << LeServ.getTemperature() << " Humidité : " << LeServ.getHumidity() << " Son : " << LeServ.getSound() << " Lumière : " << LeServ.getLight()<< "\n";
  return out;
}
