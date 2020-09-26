/**
* @author Loïc_Hug
* @file Server.hpp
* @date 24/09/2020
* @brief La classe ”Server” doit permettre de recevoir, de stocker et d’afficher les données envoyés
provenant des capteurs de la cabine de l’avion.
*/


#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
using namespace std;

class Server {
    private :

        bool m_consoleActivation;
        bool m_logActivation;

    public :

        Server();
        Server(bool,bool);
        Server (const Server&);
        virtual ~Server();
        Server &operator=(const Server&);
        void consolWrite(std::ostream&) const;
        friend ostream& operator<<( ostream&, Server const&);
        void fileWrite(ofstream&) const;
        friend ofstream& operator<<( ofstream&, Server const&);

};

#endif /* SERVER_H */