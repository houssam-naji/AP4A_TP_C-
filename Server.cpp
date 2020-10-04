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
Server::Server(bool consolActivation_p, bool logActivation_p ):m_consolActivation(consolActivation_p),m_logActivation(logActivation_p){}
//destructeur Server
Server::~Server(){}

        //affichage Server
void Server::afficherServer()
{
    cout << "Consol Activation : " << m_consolActivation << endl;
    cout << "Log Activation : " << m_logActivation << endl;

}

//redirection console
void Server::consolWrite(ostream& flux_p ) const
{
	flux_p << "Consol Activation : " << m_consolActivation << endl;
    flux_p << "Log Activation : " << m_logActivation << endl;

}
//redirection file
void Server::fileWrite(ofstream& flux_p) const
{
	flux_p << "Consol Activation : " << m_consolActivation << endl;
    flux_p << "Log Activation : " << m_logActivation << endl;

}
//operator affectation
Server Server::operator=(const Server& server_p)
{
    m_consolActivation = server_p.m_consolActivation;
    m_logActivation = server_p.m_logActivation;
    return server_p;
}
//operator redirection console
ostream& operator<<(ostream& flux_p, const Server& server_p )
{
    server_p.consolWrite(flux_p) ;
    return flux_p;
}
//operator redirection file
ofstream& operator<<(ofstream& flux_p, const Server& server_p)
{
    server_p.fileWrite(flux_p) ;
    return flux_p;
}
