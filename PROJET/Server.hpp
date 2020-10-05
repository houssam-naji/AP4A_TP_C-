/**
 * @author  Aurélien GOUY
 * @file  Server.hpp
 * @date 05/10/2020
 * @brief  Header de la classe Server : définit les attributs et méthodes de cette classe
*/

//Guards
#ifndef SERVER_H
#define SERVER_H
#include <iostream>


/**
 * @class Server
 * @brief  La classe Server a pour but de simuler un serveur qui va recevoir des données de différents capteurs (température, humidité, lumière et son) puis les enregistrer dans un fichier et/ou les afficher dans une console
*/
class Server
{
public:

    //---------------CONSTRUCTEURS ET DESTRUCTEUR---------------/
    /**
	 * @brief Constructeur par défaut de la classe Server : alloue de la mémoire pour l'exécution de la classe
	 */
    Server();

    /**
	 * @brief Constructeur par recopie de la classe Server : permet de copier les attributs de cette classe dans un nouveau serveur
	 * @param server_p Le serveur à copier dans le nouveau serveur
	 */
    Server(const Server& server_p);   //Constructeur de recopie

    /**
	 * @brief Destructeur de la classe Server : désalloue la mémoire qui a été allouée lors de la construction de la classe
	 */
    ~Server();

    //---------------SURCHARGE DES OPÉRATEURS---------------/
    /**
	 * @brief Surcharge de l'opérateur d'affectation : permet d'affecter les valeurs de server_p à un autre serveur
     * @return Renvoie une référence vers le serveur donneur d'attributs
	 * @param server_p Le serveur donneur d'attributs pour dans le nouveau serveur
	 */
    Server operator=(const Server& server_p);

    /**
	 * @brief Déclaration d'amitié de la surcharge de l'opérateur << pour les fichiers : permet d'écrire dans un fichier grâce à l'opérateur <<
     * @return Renvoie le fichier dans lequel on va écrire
	 * @param file Le fichier dans lequel on va écrire
     * @param server_p Le serveur par le biais dulequel on va écrire dans le fichier
	 */
    friend std::ofstream& operator<<(std::ofstream& file, const Server& server_p);

    /**
	 * @brief Déclaration d'amitié de la surcharge de l'opérateur << pour la console : permet d'afficher dans une console grâce à l'opérateur <<
     * @return Renvoie la console qui va servir à afficher ce que l'on veut affciher
	 * @param consol La console qui va servir à afficher ce que l'on veut affciher
     * @param server_p Le serveur par le biais dulequel on va afficher
	 */
    friend std::ostream& operator<<(std::ostream& console, const Server& server_p);


    //---------------MÉTHODES---------------/
    /**
	 * @brief Méthode dataRcv : méthode qui permet de recevoir les données des capteurs transmises par le Scheduler et de les enregistrer dans les attributs de la classe Server
	 * @param temperature_p Paramètre température, donnée température passée par le Scheduler
     * @param humidity_p Paramètre humidité, donnée humidité passée par le Scheduler
     * @param light_p Paramètre lumière, donnée lumière passée par le Scheduler
     * @param sound_p Paramètre son, donnée son passée par le Scheduler
	 */
    void dataRcv(float temperature_p, float humidity_p, float light_p, float sound_p);

    /**
	 * @brief Méthode pour écrire dans un fichier
	 * @param file Le fichier dans lequel on va écrire
	 */
    void fileWrite(std::ofstream& file);

    /**
	 * @brief Méthode pour afficher dans une console
	 * @param consol La console dans laquel on va afficher
	 */
    void consolWrite(std::ostream& consol);




private:

    bool m_consolWriteActivation;
    bool m_fileWriteActivation;
    float m_temperature;
    float m_humidity;
    float m_light;
    float m_sound;


};

/**
 * @brief Surcharge de l'opérateur << pour les fichiers : permet d'écrire dans un fichier grâce à l'opérateur <<
 * @return Renvoie le fichier dans lequel on va écrire
 * @param file Le fichier dans lequel on va écrire
 * @param server_p Le serveur par le biais dulequel on va écrire dans le fichier
 */
std::ofstream& operator<<(std::ofstream& file, const Server& server_p);

/**
 * @brief Surcharge de l'opérateur << pour la console : permet d'afficher dans une console grâce à l'opérateur <<
 * @return Renvoie la console qui va servir à afficher ce que l'on veut affciher
 * @param consol La console qui va servir à afficher ce que l'on veut affciher
 * @param server_p Le serveur par le biais dulequel on va afficher
 */
std::ostream& operator<<(std::ostream& consol, const Server& server_p);


#endif  //SERVER_H