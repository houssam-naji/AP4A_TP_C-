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
    Server();
    Server(bool consoleActivation, bool logActivation);
    Server(const Server& otherServer);
    void operator=(const Server& otherServer);
    virtual ~Server();

    friend std::ostream& operator<<(std::ostream& os, const Server& server);
    friend std::ofstream& operator<<(std::ofstream& of, const Server& server);

private:
    bool m_consolActivation; ///< Permet de controler l'activation de l'affichage console 
    bool m_logActivation; ///< Permet de controler l'activation de l'affichage des logs dans un fichier
};

#endif // SERVER_H