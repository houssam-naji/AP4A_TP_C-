/**
 * @ Ahmed EL MOUMINE
 * @ Fichier server.cpp
 * @ date 28/09/2020
 * @ implementation de la classe Server.hpp
 */

#include <fstream>
#include <iostream>
#include "Server.hpp"

Server::Server() : m_logActivation(false), m_consoleActivation(false)
{

}

Server::Server(const Server& autre_p) : m_consoleActivation(autre_p.m_consoleActivation), m_logActivation(autre_p.m_logActivation)
{

}  

Server::~Server() 
{

}

void Server::operator=(const Server& autre_p)
{
    m_consoleActivation = autre_p.m_consoleActivation;
    m_logActivation = autre_p.m_logActivation;
}

std::ostream& operator<<(std::ostream& flux, Server const& server)
{
    flux << "Console activated : " << server.m_consoleActivation << std::endl << "Log activated : " << server.m_logActivation << std::endl;
    return flux;
}

std::ofstream& operator<<(std::ofstream& file, Server const& server)
{
    file << "Console activated : " << server.m_consoleActivation << std::endl << "Log activated : " << server.m_logActivation << std::endl;
    return file;
} 