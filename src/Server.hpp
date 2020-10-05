/**
 * @author rgracari
 * @file Server.hpp
 * @date 24/09/220
 * @brief Fichier d'entêtes de la classe Server
 * @copyright MIT
 */

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

/**
 * @class Server
 * @brief Permet de recevoir, stocker et d'afficher les données provenant des capteurs
 */
class Server
{
public:
    /**
     * @brief Constructeur de la class Serveur par defaut
     */
    Server();
    
    /**
     * @brief Constructeur de la class Serveur avec initialisation des variables de class
     * @param consoleActivation − Bool permettant d'activer l'affichage dans la console
     * @param logActivation − Bool permettant d'activer l'affichage dans un fichier
     */
    Server(bool consoleActivation, bool logActivation);
    
    /**
     * @brief Constructeur par recopie de la class Server
     * @param otherServer − Instance de la class Server a copier
     */
    Server(const Server& otherServer);
    
    /**
     * @brief Surcharge de l'operateur d'affectation
     * @return void
     * @param otherServer − Reference d'une instance de la class Server constante
     */
    void operator=(const Server& otherServer);
    
    /**
     * @brief Destructeur de la class Server
     */
    virtual ~Server();

    /**
     * @brief Fonction amie et surcharge de l'operateur << permettant l'affichage dans la console
     * @return Reference de ostream de la std
     * @param os − Reference ostream passe par defaut lorsque l'operateur << est appelle
     * @param server − Instance de la class Server qui transmet les informations a afficher
     */
    friend std::ostream& operator<<(std::ostream& os, const Server& server);
    
    /**
     * @brief Fonction amie et surcharge de l'operateur << permettant l'affichage dans la console
     * @return Reference de ofstream de la std
     * @param of − Reference ofstream passe par defaut lorsque l'operateur << est appelle
     * @param server − Instance de la class Server qui transmet les informations a afficher
     */
    friend std::ofstream& operator<<(std::ofstream& of, const Server& server);

private:
    bool m_consolActivation; ///< Permet de controler l'activation de l'affichage console 
    bool m_logActivation; ///< Permet de controler l'activation de l'affichage des logs dans un fichier
};

#endif // SERVER_H