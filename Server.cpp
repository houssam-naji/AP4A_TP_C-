#include "Server.hpp"
#include <iostream>
#include <fstream>

using namespace std;


Server::Server()
{
    m_logActivation = true;
    m_consolActivation = true;
}

Server::Server(const Server& server)// par recopie
{
    m_consolActivation = server.m_consolActivation;
    m_logActivation = server.m_logActivation;
}

Server::Server(bool consolActivation, bool logActivation) //2ème constructeur
{
    m_logActivation = logActivation;
    m_consolActivation = consolActivation;
}

Server::~Server() // destructeur
{
}

Server& Server::operator=(const Server& server)
{
    m_consolActivation = server.m_consolActivation;
    m_logActivation = server.m_logActivation;

    return *this;
}

ostream& operator<<(ostream &flux, Server const& server)
{
	server.consolWrite(flux);
    return flux;
}

ofstream& operator<<(ofstream &flux, Server const& server)
{
	server.fileWrite(flux);
    return flux;
}

void Server::consolWrite(ostream &flux) const
{
    flux << "Consol activation " << m_consolActivation << "Log activation" << m_logActivation;
}

void Server::fileWrite(ostream &flux) const
{
    flux << "Consol activation " << m_consolActivation << "Log activation" << m_logActivation;
}


int main(int argc, char const *argv[])
{
	return 0;

	Server nasa;
	Server ibm(0,1);
	Server cern(ibm);


}