/**
 * @author rgracari
 * @file Server.cpp
 * @date 24/09/220
 * @brief Description de la classe Server super!
 */

#include "Server.hpp"

Server::Server() : m_consolActivation(false), m_logActivation(false)
{
}

Server::Server(bool consoleActivation, bool logActivation)
{
    m_consolActivation = consoleActivation;
    m_logActivation = logActivation;
}

Server::Server(const Server& otherServer)
{
    std::cout << "Copy constructor" << std::endl;
    m_consolActivation = otherServer.m_consolActivation;    
    m_logActivation = otherServer.m_logActivation;
}

void Server::operator=(const Server& otherServer)
{
    std::cout << "Affectation operator" << std::endl;
    m_consolActivation = otherServer.m_consolActivation;
    m_logActivation = otherServer.m_logActivation;
}

std::ostream& operator<<(std::ostream& os, const Server& server)
{
    // This is currently placeholder text
    os << "[LOG]: ConsolActivation: " << server.m_consolActivation << ", LogActivation: " << server.m_logActivation << std::endl;
    return os;
}

std::ofstream& operator<<(std::ofstream& of, const Server& server)
{
    // This is currently placeholder text
    of << "[LOG]: ConsolActivation: " << server.m_consolActivation << ", LogActivation: " << server.m_logActivation << std::endl;
    return of;
}

Server::~Server()
{

}
