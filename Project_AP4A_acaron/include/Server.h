/** @author Allane CARON
 *
 * @file Server.h
 * @date 03/10/2020
 * @brief la classe Server à pour but de récupérer les données provenant des capteurs, de les rediriger vers la console et vers des fichiers log
 *
 */

//Define guards
#ifndef SERVER_H
#define SERVER_H

#include <string>
#include <iostream>
using namespace std;

/**
 * @class Server
 * @brief la classe Server à pour but de récupérer les données provenant des capteurs, de les rediriger vers la console et vers des fichiers log
 */


class Server
{
    public:
        //forme cannonique//

        Server();
        Server(const Server& server_p);
        virtual ~Server();
        Server operator=(const Server& server_p);

        //
        /** @brief Constructeur permettant d'instancier un objet de type Server en précisant les deux attributs
         *
         * @param  consolActivation_p permet de donner une valeur à l'attribut m_consolActivation
         * @param  logActivation_p permet de donner une valeur à l'attribut m_logActivation
         * @return Etant un constructeur, celui-ci ne retourn rien
         *
         */
        Server(const bool& consolActivation_p, const bool& logActivation_p);

        /** @brief fonction amie qui permet de rediriger la données temporaire soit dans la console, soit dans un fichier
         *
         * @param le premier paramètre détermine le flux à utiliser (cout pour la console ou un fichier)
         * @param le deuxieme paramètre est le Server qui permet de stocké temporairement la donnée à envoyer
         * @return return du flux
         *
         */

        friend ostream& operator<<(ostream& out_p, const Server& server_p);


        /** @brief Cette méthode permet d'afficher à la console les différentes données temporaire du serveur
         * @param typeCapteur_p permet d'afficher le type de donnée temporairement stocké dans l'attribut du serveur
         * @return void
         *
         */

        void consolWrite(int typeCapteur_p);

    protected:

    private:
        float m_donneesTemp; /**< attribut temporaire pour les données*/

        bool m_consolActivation; /**< permet d'activer l'écriture des données dans la console */
        bool m_logActivation; /**< permet d'activer l'écriture des données dans les fichiers log */



};

ostream& operator<<(ostream& out_p, const Server& server_p);

#endif // SERVER_H
