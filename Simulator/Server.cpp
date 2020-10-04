/**
∗ @author Victor Mira
∗ @file Server.cpp
∗ @date 04/10/2020
∗ @brief Recevoir, stocker et afficher des données provenant de sensor
*/

#include <fstream>
#include <iostream>
#include "Server.hpp"

Server::Server() : m_logActivation(false), m_consoleActivation(false), m_temperature(0), m_humidity(0), m_light(0), m_sound(0)
{

}

Server::Server(const Server& other) :   m_logActivation(other.m_logActivation), m_consoleActivation(other.m_consoleActivation), m_temperature(other.m_temperature), 
                                        m_humidity(other.m_humidity), m_light(other.m_light), m_sound(other.m_sound)
{

}       

Server::~Server()
{

}

Server::Server(int temperature, int humidity, int light, int sound) : m_temperature(temperature), m_humidity(humidity), m_light(light), m_sound(sound)
{

}

void Server::operator=(const Server& another)
{
    m_consoleActivation = another.m_consoleActivation;
    m_logActivation = another.m_logActivation;

    m_humidity = another.m_humidity;
    m_light = another.m_light;
    m_temperature = another.m_temperature;
    m_sound = another.m_sound;
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