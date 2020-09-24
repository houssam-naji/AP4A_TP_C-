/**
 *@author Hugo Audran
 *@file Server.hpp
 *@date 20/09/2020
 *@brief Header de la classe server ayant pour but de stocker et afficher les données provenant des capteurs (class Sensor) et contenant les surcharges d'opérateurs =, <<.
 */

 //
 // Define guards
#ifndef SERVER_HPP_INCLUDED
#define SERVER_HPP_INCLUDED
#include "Scheduler.hpp"

/**
*@class Server
*@brief Class Server contenant une forme canonique de Coplien et dont l'objectif est de stocker et afficher les données des capteurs.
*/

class Server
{
private:
    bool consolActivation; ///< booléen d'activation de la console
    bool logActivation; ///< booléen d'activation du fichier
    Sensor m_sensor; ///< objet capteur dont les données vont être stocker dans un fichier et afficher dans la console

public:
    // Définition de la forme canonique
    Server();
    Server(Sensor sensor); // Constructeur paramétré
    Server(const Server&);
    ~Server();
    Server &operator=(const Server&);

    /**
    *@brief Ecrit dans le fichier les attributs de m_sensor qui permettra le stockage de l'objet dans un fichier avec l'opérateur <<.
    *@return void
    *@param objet ofstream& file
    */

    void fileWrite(std::ofstream& file)const;

     /**
    *@brief Ecrit dans un flux les attributs de m_sensor qui permettra l'affichage de l'objet dans la console avec l'opérateur <<.
    *@return void
    *@param objet std::ostream&
    */

    void consolWrite(std::ostream& flux)const;

     /**
    *@brief Stocke les attributs de l'objet sensor dans m_sensor (attribut de la classe server).
    *@return void
    *@param objet Sensor
    */

    void dataRcv(Sensor sensor);
};

    /**
    *@brief Surcharge de l'opérateur << pour afficher un objet server dans la console.
    *@return void
    *@param objet std::ostream&, objet Server
    */

    std::ostream& operator<<(std::ostream& flux, Server const &server);

    /**
    *@brief Surcharge de l'opérateur << pour stocker un objet server dans un fichier.
    *@return void
    *@param objet std::ostream&, objet Server
    */

    std::ofstream& operator<<(std::ofstream& file, Server const &server);


#endif // SERVER_HPP_INCLUDED
