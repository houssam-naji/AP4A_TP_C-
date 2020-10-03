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

Server& Server::operator=(const Server& p_Copie_Server)
{
  this->s_temperature=p_Copie_Server.s_temperature;
  this->s_humidity=p_Copie_Server.s_humidity;
  this->s_sound=p_Copie_Server.s_sound;
  this->s_light=p_Copie_Server.s_light;
  return(*this);
}

std::ostream& operator<<(std::ostream& p_os, Server& p_LeServ)
{
  p_os << "Temperature : " << p_LeServ.getTemperature() << " Humidité : " << p_LeServ.getHumidity() << " Son : " << p_LeServ.getSound() << " Lumière : " << p_LeServ.getLight()<< "\n";
  return p_os;
}

std::ofstream& operator<<(std::ofstream& p_out , Server& p_LeServ)
{
  p_out << "Temperature : " << p_LeServ.getTemperature() << " Humidité : " << p_LeServ.getHumidity() << " Son : " << p_LeServ.getSound() << " Lumière : " << p_LeServ.getLight()<< "\n";
  return p_out;
}
