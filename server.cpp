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
    m_humidity = autre_p.m_humidity;
    m_light = autre_p.m_light;
    m_temperature = autre_p.m_temperature;
    m_sound = autre_p.m_sound;
}

std::ostream& operator<<(std::ostream& flux, Server const& server)
{
     flux    << "Temperature: " << server.m_temperature << "C°" << std::endl << "Humidity: " <<  server.m_humidity << "%" << std::endl 
            << "Lights: " << server.m_light << std::endl<< "Sound: " << server.m_sound << " dcB" <<std::endl;
    return flux;
}

std::ofstream& operator<<(std::ofstream& file, Server const& server)
{
    file    << "Temperature: " << server.m_temperature << "C°" << std::endl << "Humidity: " <<  server.m_humidity << "%" << std::endl 
            << "Lights: " << server.m_light << std::endl<< "Sound: " << server.m_sound << " dcB" <<std::endl;
    return file;
} 