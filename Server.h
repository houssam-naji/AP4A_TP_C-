/**
 *
 * @author Hassan HACHICHOU
 * @file Server.h
 * @date 26/09/2020
 * @brief la classe Server permet de recevoir, de stocker et d'afficher les données envoyés provenant des capteurs de la cabine de l'avion
 *
 */

#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#include <iostream>
#include <fstream>

#include <string>

class Server
{
    private:

        bool m_consolActivation;
        bool m_logActivation;
    public:
        //constructeur par defaut
        Server();
        //constructeur
        Server(bool consolActivation_p , bool logActivation_p );
        //destructeur
        ~Server();
        //afficher server
        void afficherServer();
        
        //redirection console
        void consolWrite(std::ostream& flux_p) const;

        //redirection file
        void fileWrite(std::ofstream& flux_p) const;

        //operator affectation
        Server operator=(const Server& server_p);

};
    //operator redirection console
     std::ostream& operator<<(std::ostream& flux_p, const Server& server_p );
    //operator redirection file
     std::ofstream& operator<<(std::ofstream& flux_p, const Server& server_p);

#endif // SERVER_H_INCLUDED
