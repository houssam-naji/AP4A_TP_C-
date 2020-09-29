#include <iostream>
#include <fstream>
using namespace std;

#include "Server.hpp"

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

  output << "Ecriture console:\nconsolActivation: "<< S.getConsolActivation() <<"\nlogActivation: " << S.getLogActivation() << "\n";
  return output;
}

//surcharge << vers fichier
std::ofstream& operator<<(std::ofstream &output, Server const& S)
{
  output << "Ecriture fichier:\nconsolActivation: "<< S.getConsolActivation() <<"\nlogActivation: " << S.getLogActivation() << "\n";
  return output;
}

//Reception données
// void dataRcv(Server)
// {
//
// }

//Ecriture données dans un fichier de log
// void fileWrite(Server)
// {
//
// }

//Ecriture données dans la console
// void consolWrite(Server)
// {
//
// }
