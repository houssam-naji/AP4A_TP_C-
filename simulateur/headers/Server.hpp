/**
* @author Loïc_Hug
* @file Server.hpp
* @date 24/09/2020
* @brief La classe ”Server” doit permettre de recevoir, de stocker et d’afficher les données envoyés
provenant des capteurs de la cabine de l’avion.
*/


#ifndef SERVER_H
#define SERVER_H

#include <sstream>
#include <iostream>
using namespace std;

class Server {
    public :
        Server();
        Server (const Server&);
        Server &operator=(const Server&);
        Server &operator<<(const Server&);
        virtual ~Server();
};

#endif /* SERVER_H */