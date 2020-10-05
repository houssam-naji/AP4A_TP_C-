#include <iostream>
#include <fstream>
#include <string>
#include "Server.h"

using namespace std;

// Constructeur par défaut :

Server::Server()
{
    bool consolActivation=true;
    bool logActivation=true;
}

// Constructeur :

Server::Server(bool consolA, bool logA)
{
    bool consolActivation=consolA;
    bool logActivation=logA;
}

// Constructeur par recopie :

Server::Server(const Server& server)
{
    bool consolActivation=server.consolActivation;
    bool logActivation=server.logActivation;
}

//Destructeur :

Server::~Server()
{
}

void Server::consoleWrite(ostream &flux)
{
}

void Server::fileWrite(ofstream &flux){
}

ofstream operator<<(ofstream &flux, Server const& server){
    this->server.fileWrite(flux);
    flux << endl;
    return flux;
}

ostream operator<<(ostream &flux, Server const& server){
  this->server.consoleWrite(flux);
  flux << endl;
  return flux;
}

Server& Server::operator=(Server const& server){
    consolActivation=server.consolActivation;
    logActivation=server.logActivation;
}
