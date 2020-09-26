//
// Created by louis on 21/09/20.
//

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

void Server::fileWrite(int file)
{
    cout << file;
}

void Server::consolWrite(int file)
{
    cout << file;
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
    output << "log activation " << source.m_logActivation << ", console activation " <<  source.m_consolActivation;
    return output;            
}

ofstream& operator<<(ofstream& output, const Server& source) 
{ 
    output << "log activation " << source.m_logActivation << ", console activation " <<  source.m_consolActivation;
    return output;            
}