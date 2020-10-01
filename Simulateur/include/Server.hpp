/**
 *
 * @author RICHARD Antoine
 * @file Server.hpp
 * @date 24/09/2020
 * @brief La classe Server permet de recevoir, de stocker et d'afficher les donn�es
 *        envoyés provenant des capteurs de la cabine de l'avion.
 *
*/

//
// Define guards
#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

/**
*
* @class Server
* @brief la classe Server permet de recevoir, de stocker et d'afficher les données
*        envoyés provenant des capteurs de la cabine de l'avion.
*
*/
class Server
{
    public:
        Server();
        Server(const Server& server_p);
        virtual ~Server();
        Server& operator=(const Server& server_p);

        void fileWrite(std::ofstream& file_p) const;
        void consolWrite(std::ostream& output_p) const;

        // déclaration de fonctions amies (friend) pour qu'elles puissent accéder aux attributs privés de la classe
        friend std::ostream& operator<<(std::ostream& output_p, const Server& server_p);
        friend std::ofstream& operator<<(std::ofstream& file_p, const Server& server_p);

    protected:

    private:
        bool m_consolActivation;
        bool m_logActivation;
};

#endif // SERVER_H
