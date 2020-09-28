/**
* @author Licata_Enzo
* @Server.cpp
* @date 28/09/2020
* @Classe Server 
*/

#include <iostream>
#include "Server.h"

using namespace std;

// Constructeur par défaut

Server::Server(){
    m_nbrOfSensors = 4;
    m_consolActivation = true;
    m_logActivation = true;
}

// Constructeur

Server::Server(int nbrOfSensors, bool consolActivation, bool logActivation){
    m_nbrOfSensors = nbrOfSensors;
    m_consolActivation = consolActivation;
    m_logActivation = logActivation;
}

// Constructeur par recopie

Server::Server(const Server& server){
    m_nbrOfSensors = server.m_nbrOfSensors;
    m_consolActivation = server.m_consolActivation;
    m_logActivation = server.m_logActivation;
}

//Destructeur

Server::~Server(){
}

//Surcharge operateur "="

Server& Server::operator=(Server const& server){
    m_nbrOfSensors = server.m_nbrOfSensors;
    m_consolActivation = server.m_consolActivation;
    m_logActivation = server.m_logActivation;
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
