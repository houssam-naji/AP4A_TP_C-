#include <iostream>
#include <stdio.h>
#include "server.h"

using namespace std;

Server::Server()
{
    this->m_logActivation= false;
    this->m_consolActivation= false;
}

Server::Server(const Server& server)
{
    this->m_consolActivation=server.m_consolActivation;
    this->m_logActivation=server.m_logActivation;
}

Server::~Server()
{

}

//Server& Server::operator=(const Server&)
//{

//}

inline std::ostream& operator<< (std::ostream& out, const Server& server)
{
    out << "bool consolActivation : " << server.m_consolActivation << "\nbool logActivation : " << server.m_logActivation << "\n";
    return out;
}

inline std::ofstream& operator<< (std::ofstream& out, const Server& server)
{
    out << "bool consolActivation : " << server.m_consolActivation << "\tbool logActivation :" << server.m_logActivation << "\n";
    return out;
}

Server& Server::operator =(const Server& server)
{
    m_consolActivation = server.m_consolActivation;
    m_logActivation = server.m_logActivation;
    return *this;
}


