/**
 * @author mcoulmeau
 * @file Server.hpp
 * @date 28/09/2020
 * @brief Receive, save and display data send by sensors
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
    bool m_consoleActivation; ///<state of console activation
    bool m_logActivation; ///< state of log activation
    int m_choice; ///< choice input by user
    std::string m_dataRcv; ///< data receive with dataRcv()

    /**
    * @brief write to console
    * @param consoleFlux_p
    * @return void
    */
    void consoleWrite(std::ostream& consoleFlux_p) const;

    /**
    * @brief write to log file
    * @param fileFlux_p
    * @return void
    */
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
    * @param server_p
    * @return Server&
    */
    Server& operator=(const Server& server_p);
    
    /**
    * @brief Operator<< overload (output to console)
    * @param consoleFlux_p,server_p
    * @return std::ostream&
    */
    friend std::ostream& operator<<(std::ostream& consoleFlux_p, const Server& server_p);
    
    /**
    * @brief Operator<< overload (output to file)
    * @param fileFlux_p,server_p
    * @return std::ostream&
    */
    friend std::ofstream& operator<<(std::ofstream& fileFlux_p, const Server& server_p);

    /**
    * @brief Receive data from sensor and choice from user
    * @param sensor_p
    * @return void
    */
    void dataRcv(Sensor sensor_p);
};


#endif //SERVER_SERVER_H
