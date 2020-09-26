/**
 * @author Louis Pascuzzi GitHub : Zapolatero
 * @file Server.cpp
 * @date 20/09/2020
 * @brief cette classe recoit, stock et affiche les données envoyée par les capteurs
 */

#include "Server.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Server::Server()
{
    this->m_consolActivation = true;
    this->m_logActivation = true;
}

Server::Server(Server const &serv)
{
    this->m_consolActivation = serv.m_consolActivation;
    this->m_logActivation = serv.m_logActivation;
}

Server::~Server()
{

}

void Server::fileWrite(ofstream& file) const
{
    file << "log activation " << m_logActivation << ", console activation " <<  m_consolActivation; 
}


void Server::consolWrite(ostream& output) const
{
    output << "log activation " << m_logActivation << ", console activation " <<  m_consolActivation; 
}

Server& Server::operator=(const Server& serv)
{
    if (this != &serv)
    {
        this->m_logActivation = serv.m_logActivation;
        this->m_consolActivation = serv.m_consolActivation;
    }

    return *this;

}

ostream& operator<<(ostream& output, const Server& source) 
{ 
    source.consolWrite(output);
    return output;            
}

ofstream& operator<<(ofstream& output, const Server& source) 
{ 
    source.fileWrite(output);
    return output;            
}