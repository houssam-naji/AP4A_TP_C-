/**
 * @author mglodas
 * @file Server.h
 * @date 03/10/2020
 * @brief classe serveur
 */

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <ostream>
#include <string>

class Server
{

private : 

    bool m_consolActivation;
    bool m_logActivation;

public :    

    //Forme canonique de Coplien :

    Server(); // Constructeur par défaut
    Server(const Server&); // Constructeur de recopie
    ~Server(); //Destructeur
    //Server& operator=(const Server&); // Operateur d'affectation
    
    /**
    * @brief surcharge operator= 
    * @param server_p
    * @return Server
    */
    Server& operator=(const Server& server);
    
    /**
    * @brief surcharge operator<<  (output vers console)
    * @param consoleOut,server_p
    * @return std::ostream&
    */
    friend std::ostream& operator<<(std::ostream& consolOut, const Server& server);

    /**
    * @brief surcharge operator<<  (output vers fichier)
    * @param fichierOut,server_p
    * @return std::oftream&
    */
    friend std::ofstream& operator<<(std::ofstream& fichierOut, const Server& server);
};

#endif //SERVER_H