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
        Server(bool consolActivation , bool logActivation );
        //destructeur
        ~Server();
        //afficher server
        void afficherServer();
        
        //redirection console
        void consolWrite(std::ostream& flux) const;

        //redirection file
        void fileWrite(std::ofstream& flux) const;

        //operator affectation
        Server operator=(const Server& server);

};
    //operator redirection console
     std::ostream& operator<<(std::ostream& flux, const Server& server );
    //operator redirection file
     std::ofstream& operator<<(std::ofstream& flux, const Server& server);

#endif // SERVER_H_INCLUDED
