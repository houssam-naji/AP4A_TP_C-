/**
 * @author mcoulmeau
 * @file Server.hpp
 * @date 28/09/2020
 * @brief Implementation of operator= and << overload
 */


#ifndef SERVER_SERVER_H
#define SERVER_SERVER_H

#include <iostream>
#include <fstream>
#include <string>
#include "Sensor.h"

class Server
{
private:
    bool m_consoleActivation;
    bool m_logActivation;
    int m_choice;
    std::string m_dataRcv;

    void consoleWrite(std::ostream& consoleFlux_p) const;
    void fileWrite(std::ofstream& fileFlux_p) const;

public:
    //Constructeur par default
    Server();
    
    //Constructeur par recopie
    Server(const Server&);
    
    //Destructeur
    ~Server();
    
    /**
    * @brief Operator= overload
    * @brief Operator= overload
    * @param objet
    * @return Server&
    */
    Server& operator=(const Server& objet);
    
    /**
    * @brief Operator<< overload (output to console)
    * @param objet
    * @return Server&
    */
    friend std::ostream& operator<<(std::ostream& consoleFlux_p, const Server& server_p);
    
    /**
    * @brief Operator<< overload (output to file)
    * @param objet
    * @return Server&
    */
    friend std::ofstream& operator<<(std::ofstream& fileFlux_p, const Server& server_p);

    void dataRcv(Sensor sensor_p);
};


#endif //SERVER_SERVER_H
