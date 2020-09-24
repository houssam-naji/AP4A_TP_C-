/**
 *
 * @author RICHARD Antoine
 * @file Server.hpp
 * @date 24/09/2020
 * @brief la classe Server permet de recevoir, de stocker et d'afficher les données envoyés provenant des capteurs de la cabine de l'avion
 *
 */

//
// Define guards
#ifndef SERVER_H
#define SERVER_H

#include <ostream>
#include <string>

/**
*
* @class Server
* @brief la classe Server permet de recevoir, de stocker et d'afficher les données envoyés provenant des capteurs de la cabine de l'avion
*
*/
class Server
{
    public:
        Server();
        Server(const Server& server);
        virtual ~Server();
        Server& operator=(const Server& server);

    protected:

    private:
        bool m_consolActivation;
        bool m_logActivation;
};

#endif // SERVER_H
