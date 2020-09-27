/**
∗ @author Victor Mira
∗ @file Server.cpp
∗ @date 28/09/2020
∗ @brief Recevoir, stocker et afficher des données provenant de sensor
*/

#include <fstream>
#include <iostream>
#include "Server.hpp"

Server::Server() : m_logActivation(false), m_consoleActivation(false)
{

}

Server::Server(const Server& other) : m_consoleActivation(other.m_consoleActivation), m_logActivation(other.m_logActivation)
{

}  

Server::~Server()
{

}

void Server::operator=(const Server& another)
{
    m_consoleActivation = another.m_consoleActivation;
    m_logActivation = another.m_logActivation;
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