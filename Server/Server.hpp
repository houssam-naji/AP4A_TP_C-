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

    Server();
    Server(Server const&);
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
    * @param const Server& : référence du serveur dont on affiche les données, ostream& flux dans lequel on va indiquer les informations du serveur
    */
    friend ostream& operator<<(ostream&, const Server&);

    /**
    * @brief apelle la fonction FileWrite pour écrire les attributs du serveur dans un fichier log
    * @return retourne un ostream contenant les informations du serveur
    * @param const Server& : référence du serveur dont on affiche les données, ostream& flux dans lequel on va indiquer les informations du serveur
    */
    friend ofstream& operator<<(ofstream&, const Server&);

private:
    
    void fileWrite(ofstream&) const;
    void consolWrite(ostream&) const;
    bool m_consolActivation;
    bool m_logActivation;


};

#endif //SERVER_H
