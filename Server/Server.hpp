/**
 * @author Louis Pascuzzi GitHub : Zapolatero
 * @file Server.hpp
 * @date 20/09/2020
 * @brief cette classe recoit, stock et affiche les données envoyée par les capteurs
 */

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>


using namespace std;

/**
 * @class Server
 * @brief recoit, stock et affiche les données envoyée par les capteurs
 */
class Server
{
    
public:

    /**
    * @brief créé une instance par défaut de la classe Server
    */
    Server();

    /**
    * @brief créé une nouvelle instance de la classe Server par copie d'un autre server
    * @param const Server& : référence vers l'instance de la classe Server à copier
    */
    Server(Server const& serv_p);

    /**
    * @brief destructeur
    */
    virtual ~Server();

    /**
    * @brief fait une copie du server en paramètre
    * @return retourne une reference du serveur copié
    * @param const Server& : référence du serveur à copier
    */
    Server& operator=(const Server&);

    /**
    * @brief apelle la fonction consolWrite pour afficher les attributs du serveur dans la console
    * @return retourne un ostream contenant les informations du serveur
    * @param const Server& : référence du serveur dont on affiche les données 
    * @param ostream& flux dans lequel on va indiquer les informations du serveur
    */
    friend ostream& operator<<(ostream&, const Server&);

    /**
    * @brief apelle la fonction FileWrite pour écrire les attributs du serveur dans un fichier log
    * @return retourne un ostream contenant les informations du serveur
    * @param const Server& : référence du serveur dont on affiche les données
    * @param ostream& flux dans lequel on va indiquer les informations du serveur
    */
    friend ofstream& operator<<(ofstream&, const Server&);

private:

    /**
    * @brief écrit les informations du serveur courant dans le flux de fichier de sortie
    * @return retourne une reference du serveur copié
    * @param const ofstream& : flux de fichier de sortie dans lequel ecrire les informations du serveur courant
    */
    void fileWrite(ofstream&) const;

    /**
    * @brief écrit les informations du serveur courant dans le flux de sortie
    * @return retourne une reference du serveur copié
    * @param const ofstream& : flux de sortie dans lequel ecrire les informations du serveur courant
    */
    void consolWrite(ostream&) const;

    /**
    *  @brief booléen indiquant si la console est activée
    */
    bool m_consolActivation; 

    /**
    *  @brief booléen indiquant si l'enregistrement des mesures dans un fichier lof est activé
    */
    bool m_logActivation;


};

#endif //SERVER_H
