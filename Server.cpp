/**
 *@author Hassan HACHICHOU
 *@file Server.cpp
 *@date 20/09/2020
 *@brief Implementation de la classe server
 */

#include <iostream>
#include <fstream>
#include<string>
#include "Server.h"
using namespace std;

// Constructeur Server
Server::Server(bool consolActivation, bool logActivation ):m_consolActivation(consolActivation),m_logActivation(logActivation){}
//destructeur Server
Server::~Server(){}

        //affichage Server
void Server::afficherServer()
{
    cout << "Consol Activation : " << m_consolActivation << endl;
    cout << "Log Activation : " << m_logActivation << endl;

}

//redirection console
void Server::consolWrite(ostream& flux ) const
{
	flux << "Consol Activation : " << m_consolActivation << endl;
    flux << "Log Activation : " << m_logActivation << endl;

}
//redirection file
void Server::fileWrite(ofstream& flux) const
{
	flux << "Consol Activation : " << m_consolActivation << endl;
    flux << "Log Activation : " << m_logActivation << endl;

}
//operator affectation
Server Server::operator=(const Server& server)
{
    m_consolActivation = server.m_consolActivation;
    m_logActivation = server.m_logActivation;
    return server;
}
//operator redirection console
ostream& operator<<(ostream& flux, const Server& server )
{
    server.consolWrite(flux) ;
    return flux;
}
//operator redirection file
ofstream& operator<<(ofstream& flux, const Server& server)
{
    server.fileWrite(flux) ;
    return flux;
}
