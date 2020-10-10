/**
*@ Ahmed EL MOUMINE
*@ Fichier server.hpp
*@ date 20.09.2020
*@ cette classe doit recevoir, stocker et afficher les donnees des capteurs
*/
// Defines guards
#ifndef SERVER_H
#define SERVER_H

#include <fstream>
#include <iostream>
#include <vector>
class Server
{
public:
    //la forme canonique
    Server();
    Server(const Server& autre_p);
    ~Server();
       /**
    ∗ @Créer un Server qui prend en parametre les attributs de stockage
    *
    * @param -humidity: humidité  -temperature: temperature  -sound: son simulé -light: lumières 
    */
	 Server(int temperature, int humidity, int light, int sound);

    /**
    ∗ @ Copier la valeur des attributs d'un Server dans les attributs de l'autre
    * @ return rien
    * @ param autre est le Serveur que l'on souhaite copier
    */
    void operator=(const Server& autre_p);

    //fonctions amies d'affichage dans les logs pour la surcharge d'opérateurs
    friend std::ostream& operator<<(std::ostream& flux, Server const& server);
    friend std::ofstream& operator<<(std::ofstream& file, Server const& server);

private:
    bool 	m_logActivation, m_consoleActivation; // booléens indiquant l'endroit où devrait se faire l'affichage
 	int 	m_temperature, m_humidity, m_light, m_sound; // stockage des valeures données par les capteurs de la classe sensor
};

/**
∗ @ on va Afficher les attributs d'un Serveur en console
* @ return Une référence sur le flux envoyé en paramètres
* @ paramettre flux_p: flux de sortie de la console - paramettre server_p: Classe dont on souhaite afficher les atttributs
*/
std::ostream& operator<<(std::ostream& flux_p, Server const& server_p);

/**
∗ @ on va Afficher les attributs d'un Serveur dans un fichier
* @ return Une référence sur le flux envoyé en paramètres
* @ paramettre -file: flux de sortie vers un fichier -server_p: Classe dont on souhaite afficher les atttributs
*/
std::ofstream& operator<<(std::ofstream& file_p, Server const& server_p);



#endif // SERVER_H