/**
 * @author rgracari
 * @file Server.cpp
 * @date 24/09/220
 * @brief Description de la classe Server super!
 */

#include "Server.hpp"

Server::Server()
{

}

Server::Server(const Server& otherServer)
{
    m_consolActivation = otherServer.m_consolActivation;    
    m_logActivation = otherServer.m_logActivation;
}

void Server::operator=(const Server& otherServer)
{
    m_consolActivation = otherServer.m_consolActivation;
    m_logActivation = otherServer.m_logActivation;
}

Server::~Server()
{

}
