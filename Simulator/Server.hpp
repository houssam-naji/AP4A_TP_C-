/**
∗ @author Victor Mira
∗ @file Server.hpp
∗ @date 04/10/2020
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
    ∗ @brief Créer un Server avec des valeurs dans les attributs de stockage
    * @return un Server
    * @param -humidity: humidité simulée -temperature: temperature simulée -sound: son simulé -light: lumières simulée
    */
    Server(int temperature, int humidity, int light, int sound);

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
    int m_temperature, m_humidity, m_light, m_sound; //< variable de stockage des valeures données par la classe sensor
};

/**
∗ @brief Afficher les attributs relatifs aux sensor d'un Serveur en console
* @return Une référence sur le flux envoyé en paramètres
* @param -flux: flux de sortie de la console -server: Classe dont on souhaite afficher les atttributs
*/
std::ostream& operator<<(std::ostream& flux, Server const& server);

/**
∗ @brief Afficher les attributs relatifs aux sensor d'un Serveur dans un fichier
* @return Une référence sur le flux envoyé en paramètres
* @param -file: flux de sortie vers un fichier -server: Classe dont on souhaite afficher les atttributs
*/
std::ofstream& operator<<(std::ofstream& file, Server const& server);



#endif // SERVER_H