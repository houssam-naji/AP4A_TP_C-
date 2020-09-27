/**
∗ @author Victor Mira
∗ @file Server.hpp
∗ @date 28/09/2020
∗ @brief Recevoir, stocker et afficher des données provenant de sensor
*/

//
// Defines guards
#ifndef SERVER_H
#define SERVER_H

#include <fstream>
#include <iostream>
#include <vector>

/**
∗ @class Server
∗ @brief Recevoir, stocker et afficher des données provenant de sensor
*/

class Server
{
public:
    //Définition de la forme canonique
    Server();
    Server(const Server& other);
    ~Server();

    /**
    ∗ @brief Copier la valeur des attributs d'un Server dans les attributs de l'autre
    * @return rien
    * @param -another: le Serveur que l'on souhaite copier
    */
    void operator=(const Server& another);

    //fonctions amies d'affichage dans les logs pour la surcharge d'opérateurs
    friend std::ostream& operator<<(std::ostream& flux, Server const& server);
    friend std::ofstream& operator<<(std::ofstream& file, Server const& server);

private:
    bool m_logActivation, m_consoleActivation; ///< booléens indiquant l'endroit où devrait se faire l'affichage

};

/**
∗ @brief Afficher les attributs d'un Serveur en console
* @return Une référence sur le flux envoyé en paramètres
* @param -flux: flux de sortie de la console -server: Classe dont on souhaite afficher les atttributs
*/
std::ostream& operator<<(std::ostream& flux, Server const& server);

/**
∗ @brief Afficher les attributs d'un Serveur dans un fichier
* @return Une référence sur le flux envoyé en paramètres
* @param -file: flux de sortie vers un fichier -server: Classe dont on souhaite afficher les atttributs
*/
std::ofstream& operator<<(std::ofstream& file, Server const& server);



#endif // SERVER_H