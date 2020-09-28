/
 @author Licata_Enzo
 @Server.cpp
 @date 28/09/2020
 @Classe Server 
/

#include <iostream>
#include "Server.h"

using namespace std;

// Constructeur par défaut

Server::Server(){
    int nbrOfSensors = 4;
    bool consolActivation = true;
    bool logActivation = true;
}

// Constructeur

Server::Server(int sensorsNumber, bool consolA, bool logA){
    int nbrOfSensors = sensorsNumber;
    bool consolActivation = consolA;
    bool logActivation = logA;
}

// Constructeur par recopie

Server::Server(const Server& server){
    int nbrOfSensors = server.nbrOfSensors;
    bool consolActivation = server.consolActivation;
    bool logActivation = server.logActivation;
}

//Destructeur

Server::~Server(){
}

//Surcharge operateur "="

Server& Server::operator=(Server const& server){
    nbrOfSensors = server.nbrOfSensors;
    consolActivation = server.consolActivation;
    logActivation = server.logActivation;
}

//Surcharge operateur "<<"

ostream operator<<(ostream &flux, Server const& server){
  flux << endl;
}

//Methode consolWrite()

void Server::consolWrite(){
}

//Methode fileWrite()

void Server::fileWrite(){
}

//Methode dataRcv()

void Server::dataRcv(){
}
