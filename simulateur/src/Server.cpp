/**
* @author Loïc_Hug
* @file Server.cpp
* @date 24/09/2020
* @brief La classe ”Server” doit permettre de recevoir, de stocker et d’afficher les données envoyés
provenant des capteurs de la cabine de l’avion.
*/

#include "../headers/Server.hpp"

Server::Server()
{
}

Server::~Server()
{
}

Server& Server::operator=(const Server& server){
    return (*this);
}