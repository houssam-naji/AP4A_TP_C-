/**
* @author pierre_clerc
* @file Server.cpp
* @date 05 / 10 / 2020
* @brief La classe Server reçoit et stocke des données depuis la (future) classe Sensor.
*/

#include <iostream>
#include <fstream>
#include "Server.hpp"
using namespace std;

Server::Server() : m_temperature(0), m_humidity(0), m_sound(0), m_light(false)
{
}

Server::Server(float temperature, float humidity, int sound, bool light) : m_temperature(temperature), m_humidity(humidity), m_sound(sound), m_light(light)
{
}

Server::Server(const Server& copieServer) : m_humidity(copieServer.m_humidity), m_temperature(copieServer.m_temperature), m_sound(copieServer.m_sound), m_light(copieServer.m_light)
{
}

Server::~Server()
{
}

Server& Server::operator=(const Server& copieServer)
{
  this->m_temperature = copieServer.m_temperature;
  this->m_humidity = copieServer.m_humidity;
  this->m_sound = copieServer.m_sound;
  this->m_light = copieServer.m_light;
  return *this;
}

/**
 * \fn ostream &operator<<(ostream &flux, Server const &server)
 * \brief Fonction qui permet de surcharger l'opérateur << pour écrire sur la console ou dans un fichier
 *
 * \param ostream& Adresse de l'objet ostream qui permet de créer la sortie vers console/fichier
 * \param Server const& Adresse de l'objet constant Server qui stock les données à afficher
 * \return flux permet de retourner le flux vers la console/fichier
 */

ostream& operator<<(ostream& flux, Server const& server)
{
  server.afficher(flux);
  return flux;
}

/**
 * \fn void Server::afficher(ostream& flux) const
 * \brief Fonction qui permet d'afficher les attributs de la classe Server
 *
 * \param ostream& Adresse de l'objet ostream qui permet de créer la sortie vers console/fichier
 * \return rien, c'est une fonction void
 */

void Server::afficher(ostream& flux) const
{
  flux 
  << "temperature: " << m_temperature << endl 
  << "humidity: " << m_humidity << endl
  << "sound: " << m_sound << endl 
  << "light: " << m_light << endl;
}