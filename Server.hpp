/**
 *@author Hugo Audran
 *@file Server.hpp
 *@date 20/09/2020
 *@brief Header de la classe server ayant pour but de stocker et afficher les données provenant des capteurs (et contenant les surcharges d'opérateurs =, << pour Server.
 */

 // Define guards
#ifndef SERVER_HPP_INCLUDED
#define SERVER_HPP_INCLUDED
#include "Scheduler.hpp"

/**
*@class Server
*@brief Class Server contenant une forme canonique de Coplien et dont l'objectif est de stocker et afficher les données des capteurs provenant du scheduler
*/

class Server
{
private:
    bool consolActivation; ///< booléen d'affichage des données dans la console si souhaité
    bool logActivation; ///< booléen de stockage des données dans un fichier si souhaité
    float m_humidity; ///< reçoit le taux d'humidité dans la cabine du capteur Humidity
    float m_temperature; ///< reçoit la température de la cabine du capteur Temperature
    int m_sound; ///< reçoit l'intensité sonore dans la cabine du capteur Sound
    bool m_light; ///< reçoit lumière allumée / lumière éteinte (true ou false utilisé pour stocker/afficher lumière allumée et lumière éteinte précisemment)

public:
    // Définition de la forme canonique
    Server();
    Server(float humidity_p, float temperature_p, int sound_p, bool light_p);
    Server(const Server&);
    ~Server();
    Server &operator=(const Server&);

    /**
    *@brief Ecrit dans le fichier file_p le taux d'humidité, la tempèrature, l'intensité sonore et l'état de la lumière si souhaité par l'utilisateur
    *@return void
    *@param objet ofstream& file_p
    */

    void fileWrite(std::ofstream& file)const;

     /**
    *@brief Ecrit dans flux_p le taux d'humidité, la tempèrature, l'intensité sonore et l'état de la lumière si souhaité par l'utilisateur
    *@return void
    *@param objet ostream& flux_p
    */

    void consolWrite(std::ostream& flux)const;

     /**
    *@brief Génére 4 capteurs, execute la fonction aléatoire pour générer des données, les stocke dans les attributs du serveur, demande l'autorisation d'afficher et de stocker dans un fichier
    *@return void
    *@param Humidity humidity_p, Temperature temperature_p, Sound sound_p, Light light_p
    */

    void dataRcv(Humidity humidity_p, Temperature temperature_p, Sound sound_p, Light light_p);

};

    /**
    *@brief Surcharge de l'opérateur << pour afficher un objet server dans la console.
    *@return Objet ostream
    *@param objet ostream& flux_p, objet Server
    */

    std::ostream& operator<<(std::ostream& flux_p, Server const& server_p);

    /**
    *@brief Surcharge de l'opérateur << pour stocker un objet server dans un fichier.
    *@return Objet ofstream
    *@param objet std::ostream&, objet Server
    */

    std::ofstream& operator<<(std::ofstream& file_p, Server const& server_p);

#endif // SERVER_HPP_INCLUDED
