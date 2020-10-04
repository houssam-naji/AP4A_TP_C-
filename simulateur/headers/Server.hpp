/**
* @author Loïc_Hug
* @file Server.hpp
* @date 24/09/2020
* @brief La classe ”Server” doit permettre de recevoir, de stocker et d’afficher les données envoyés
provenant des capteurs de la cabine de l’avion.
*/


#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

/**
 * @class Server
 * @brief La classe ”Server” doit permettre de recevoir, de stocker et d’afficher les données envoyés
provenant des capteurs de la cabine de l’avion.
 */
class Server {
    private :

          /**
         *  @brief booléen indiquant si la console est activée
         */
        bool m_consoleActivation;

        /**
         *  @brief booléen indiquant si les logs activés
         */
        bool m_logActivation;

          /**
         * @brief afficher les attributs du serveur dans le flux de sortie
         * @param const référence au flux de sortie
         */
        void consolWrite(std::ostream&) const;

        /**
         * @brief afficher les attributs du serveur dans le flux de fichier de sortie
         * @param const référence au flux de fichier de sortie
         */
        void fileWrite(std::ofstream&) const;

    public :

        /**
         * @brief crée une nouvelle instance par défaut de la classe Server
         */
        Server();

          /**
         * @brief créé une nouvelle instance de la classe Server en initialisant les attributs de class avec 2 booléens
         * @param booléen permettant initialiser m_consoleActivation et m_logActivation
         */
        Server(bool,bool);

        /**
         * @brief créé une nouvelle instance de la classe Server par copie d'un objet Server en paramètre
         * @param référence à un objet serveur
         */
        Server (const Server&);

        /**
         * @brief destructeur
         */
        virtual ~Server();

        /**
         * @brief surchage de l'opérateur =, copie les attribut de l'objet en paramètre dans un nouvelle objet 
         * @return un nouveau serveur avec les attributs du serveur en paramètre
         * @param reférence à un serveur
         */
        Server &operator=(const Server&);

        /**
         * @brief surcharge de l'opérateur <<, écrit dans le terminal les attributs du serveur
         * @return retourne un ostream
         * @param ostream flux
         * @param Server dont les attributs vont être afficher
         */
        friend std::ostream& operator<<( std::ostream&, Server const&);

        /**
         * @brief surcharge de l'opérateur <<, écrit dans le terminal les attributs du serveur
         * @return retourne un ostream
         * @param ostream flux
         * @param Server dont les attributs vont être afficher
         */     
        friend std::ofstream& operator<<( std::ofstream&, Server const&);

};

#endif /* SERVER_H */