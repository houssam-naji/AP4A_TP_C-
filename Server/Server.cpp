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

Server::Server(Server const& serv_p)
{
    this->m_consolActivation = serv_p.m_consolActivation;
    this->m_logActivation = serv_p.m_logActivation;
}

Server::~Server()
{

}

void Server::fileWrite(ofstream& file_p) const
{
    file_p << "log activation " << m_logActivation << ", console activation " <<  m_consolActivation; 
}


void Server::consolWrite(ostream& output_p) const
{
    output_p << "log activation " << m_logActivation << ", console activation " <<  m_consolActivation; 
}

Server& Server::operator=(const Server& serv_p)
{
    if (this != &serv_p)
    {
        this->m_logActivation = serv_p.m_logActivation;
        this->m_consolActivation = serv_p.m_consolActivation;
    }

    return *this;

}

ostream& operator<<(ostream& output_p, const Server& source_p) 
{ 
    source_p.consolWrite(output_p);
    return output_p;            
}

ofstream& operator<<(ofstream& output_p, const Server& source_p) 
{ 
    source_p.fileWrite(output_p);
    return output_p;            
}