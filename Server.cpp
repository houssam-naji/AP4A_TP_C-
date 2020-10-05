#include <iostream>
#include <fstream>
using namespace std;

#include "Server.hpp"
#include "Sensor.hpp"

//constructeur
Server::Server()
{
  this->consolActivation = 0;
  this->logActivation = 0;
}

//constructeur de recopie
Server::Server(const Server& autreObjet)
{
  this->consolActivation = autreObjet.consolActivation;
  this->logActivation = autreObjet.logActivation;
}

//destructeur
Server::~Server()
{

}

//methode pour obtenir valeur de consolActivation
bool Server::getConsolActivation() const
{
  return this->consolActivation;
}

//methode pour definir valeur de consolActivation
void Server::setConsolActivation(bool val)
{
  this->consolActivation = val;
}

//methode pour obtenir valeur de logActivation
bool Server::getLogActivation() const
{
  return this->logActivation;
}

//methode pour definir valeur de logActivation
void Server::setLogActivation(bool val)
{
  this->logActivation = val;
}

//surcharge << vers console
std::ostream& operator<<(std::ostream &output, Server const& S)
{
  S.consolWrite(output);
  return output;
}

//surcharge << vers fichier
std::ofstream& operator<<(std::ofstream &output, Server const& S)
{
  S.fileWrite(output);
  return output;
}

//Reception données
void Server::dataRcv(Sensor S)
{
  this->dataReceived = S.sensorData;
}

//Ecriture données dans un fichier de log
void Server::fileWrite(std::ofstream& fileFlux) const
{
  if(this->logActivation)
  {
    cout << "Ecriture fichier active(logActivation=1)\n";
    fileFlux << "Donnée Sensor: " << this->dataReceived << "\n";
  }
  else
  {
    cout << "Ecriture fichier inactive(logActivation=0)\n";
  }
}

//Ecriture données dans la console
void Server::consolWrite(std::ostream& consolFlux) const
{
  if(this->consolActivation)
  {
    cout << "Ecriture console active(consolActivation=1)\n";
    consolFlux << "Donnée Sensor: " << this->dataReceived << "\n";
  }
  else
  {
    cout << "Ecriture console inactive(consolActivation=0)\n";
  }
}
