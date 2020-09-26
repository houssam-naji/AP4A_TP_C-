/**
* @author Loïc_Hug
* @file Server.cpp
* @date 24/09/2020
* @brief La classe ”Server” doit permettre de recevoir, de stocker et d’afficher les données envoyés
provenant des capteurs de la cabine de l’avion.
*/

#include "../headers/Server.hpp"

Server::Server()
{
    m_consoleActivation = false;
    m_logActivation = false;
}

Server::Server(bool consoleActivation_p,bool logActivation_p)
{
    m_consoleActivation = consoleActivation_p;
    m_logActivation = logActivation_p;
}

Server::Server(const Server& server_p)
{
    this->m_consoleActivation = server_p.m_consoleActivation;
    this->m_logActivation = server_p.m_logActivation;
}

Server::~Server()
{
}

Server& Server::operator=(const Server& server_p){
    this->m_consoleActivation = server_p.m_consoleActivation;
    this->m_logActivation = server_p.m_logActivation;
    return (*this);
}

void Server::consolWrite(ostream& flux_p) const
{
    flux_p << "m_consoleActivation : " << m_consoleActivation << " --- m_logActivation : " << m_logActivation << endl;
}

ostream& operator<<( ostream &flux_p, Server const& server_p )
{
    server_p.consolWrite(flux_p);
    return flux_p;
}

void Server::fileWrite(ofstream& flux_p) const
{
    flux_p << "m_consoleActivation : " << m_consoleActivation << " --- m_logActivation : " << m_logActivation << endl;
}

ofstream& operator<<( ofstream& flux_p, Server const& server_p )
{
    server_p.consolWrite(flux_p);
    return flux_p;
}