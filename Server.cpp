#include <iostream>
#include <fstream>
using namespace std;

#include "Server.hpp"

//constructeur
Server::Server()
{
  this.consolActivation = 0;
  this.logActivation = 0;
}

//constructeur de recopie
Server::Server(const Server& autreObjet)
{
  this.consolActivation = autreObjet.consolActivation;
  this.logActivation = autreObjet.logActivation;
}

//destructeur
Server::~Server()
{
  delete this.consolActivation;
  delete this.logActivation;
}

//surcharge =
Server::Server& operator=(const Server& S)
{
  if(this!=&S)
  {
    this.consolActivation = S.consolActivation;
    this.logActivation = S.logActivation;
    return (*this);
  }
}

//surcharge << vers console
std::ostream& operator<<(std::ostream &output, Server const& S)
{

  output << "Ecriture console:\nconsolActivation: "<< S.consolActivation <<"\nlogActivation: " << S.logActivation << "\n";
  return output;
}

//surcharge << vers fichier
std::ofstream& operator<<(std::ofstream &output, Server const& S)
{
  output << "Ecriture fichier:\nconsolActivation: "<< S.consolActivation <<"\nlogActivation: " << S.logActivation << "\n";
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
