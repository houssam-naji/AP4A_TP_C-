/**
 * @author mcoulmeau
 * @file Server.hpp
 * @date 28/09/2020
 * @brief Receive, save and display data send by sensors
 */

#include "Server.h"
#include <iostream>

Server::Server()
{
    this->m_choice=0;
    this->m_logActivation= false;
    this->m_consoleActivation= false;
    this->m_dataRcv="";
}

Server::Server(const Server& server_p)
{
    this->m_consoleActivation=server_p.m_consoleActivation;
    this->m_logActivation=server_p.m_logActivation;
    this->m_dataRcv=server_p.m_dataRcv;
    this->m_choice=server_p.m_choice;
}

Server::~Server()
{

}

Server& Server::operator=(const Server& server_p)
{
    this->m_consoleActivation=server_p.m_consoleActivation;
    this->m_logActivation=server_p.m_logActivation;
    this->m_dataRcv=server_p.m_dataRcv;
    this->m_choice=server_p.m_choice;
    return *this;
}

std::ostream& operator<<(std::ostream& consoleFlux_p, const Server& server_p)
{
    server_p.consoleWrite(consoleFlux_p);
    return consoleFlux_p;
}

std::ofstream& operator<<(std::ofstream& fileFlux_p, const Server& server_p)
{
    server_p.fileWrite(fileFlux_p);
    return fileFlux_p;
}

void Server::fileWrite(std::ofstream& fileFlux_p) const
{
    if (this->m_logActivation)
    {
        fileFlux_p<<"Server 1 (potentiel formatage différent de celui de consoleWrite):\n"<<this->m_dataRcv<<std::endl;
    }
}

void Server::consoleWrite(std::ostream& consoleFlux_p) const
{
    if (this->m_consoleActivation)
    {
        consoleFlux_p<<"Server 1:\n"<<this->m_dataRcv<<std::endl;
    }
}

void Server::dataRcv(Sensor sensor_p)
{
    do {

        std::cout << "1-Activate console\n2-Activate logs\n3-Activate both" << std::endl;
        std::cin >> this->m_choice;
        switch (this->m_choice) {
            case 1:
                this->m_consoleActivation = true;
                this->m_logActivation = false;
                break;
            case 2:
                this->m_logActivation = true;
                this->m_consoleActivation = false;
                break;
            case 3:
                this->m_consoleActivation = true;
                this->m_logActivation = true;
                break;
            default:
                std::cout << "Please choose between 1-2-3\n";
                this->m_consoleActivation = false;
                this->m_logActivation = false;
                break;
        }
    }
    while (!this->m_consoleActivation && !this->m_logActivation);

    this->m_dataRcv="\tsensor value = " + std::to_string(sensor_p.m_value);
}

