/** @author Allane CARON
 *
 * @file Server.h
 * @date 03/10/2020
 * @brief la classe Server � pour but de r�cup�rer les donn�es provenant des capteurs, de les rediriger vers la console et vers des fichiers log
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
 * @brief la classe Server � pour but de r�cup�rer les donn�es provenant des capteurs, de les rediriger vers la console et vers des fichiers log
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
        /** @brief Constructeur permettant d'instancier un objet de type Server en pr�cisant les deux attributs
         *
         * @param  consolActivation_p permet de donner une valeur � l'attribut m_consolActivation
         * @param  logActivation_p permet de donner une valeur � l'attribut m_logActivation
         * @return Etant un constructeur, celui-ci ne retourn rien
         *
         */
        Server(const bool& consolActivation_p, const bool& logActivation_p);

        /** @brief fonction amie qui permet de rediriger la donn�es temporaire soit dans la console, soit dans un fichier
         *
         * @param le premier param�tre d�termine le flux � utiliser (cout pour la console ou un fichier)
         * @param le deuxieme param�tre est le Server qui permet de stock� temporairement la donn�e � envoyer
         * @return return du flux
         *
         */

        friend ostream& operator<<(ostream& out_p, const Server& server_p);


        /** @brief Cette m�thode permet d'afficher � la console les diff�rentes donn�es temporaire du serveur
         * @param typeCapteur_p permet d'afficher le type de donn�e temporairement stock� dans l'attribut du serveur
         * @return void
         *
         */

        void consolWrite(int typeCapteur_p);

    protected:

    private:
        float m_donneesTemp; /**< attribut temporaire pour les donn�es*/

        bool m_consolActivation; /**< permet d'activer l'�criture des donn�es dans la console */
        bool m_logActivation; /**< permet d'activer l'�criture des donn�es dans les fichiers log */



};

ostream& operator<<(ostream& out_p, const Server& server_p);

#endif // SERVER_H
