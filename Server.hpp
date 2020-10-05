/**
* @author Valentin Mercy
* @file Server.hpp
* @date 26/09/2020
* @brief Definition of Server class which is responsible for receiving, storing and displaying data provided by the airplane cabin
*/

#include <iostream>

#ifndef SERVER_HPP
#define SERVER_HPP

/**
 * @class Server
 * @brief this class is responsible for receiving, storing and displaying data provided by the airplane cabin
 */
namespace streamOverload
{
  class Server
  {
  public:
    /**
   * @brief constructeur par défaut
   * */
    Server();
    /**
   * @brief constructeur par recopie
   * @param 
   * */
    Server(const Server &other);
    /**
   * @brief destructeur
   * */
    virtual ~Server();
    /**
   * @brief surcharge de l'opérateur d'affectation
   * @param Server - reference vers le serveur source
   * @return référence vers le nouveau serveur
   * */
    Server &operator=(const Server &other);
    /**
   * @brief reçoit les données des capteurs et les stocke temporairement dans les attributs privés
   * @param value_p - valeur renvoyée par le capteur
   * @param sensorType_p - type de capteur parmi "T" (temperature), "H" (humidité), "L" (lumière), "S" (son)
   * */
    void dataRcv(int value_p, char sensorType_p);
    /**
   * @brief active ou desactive la sortie console des dernières données reçues par les capteurs
   * @param state - nouvel etat (true pour activer, false pour désactiver)
   **/
    void toggleConsole(bool state);
    /**
   * @brief active ou desactive l'enregistrement des dernières données reçues par les capteurs dans un fichier
   * @param state - nouvel etat (true pour activer, false pour désactiver)
   **/
    void toggleLog(bool state);
    /**
   * @brief surcharge de l'opérateur << chargé d'écrire le dernier relevé des capteurs sur la console
   * @param flux - référence vers le flux d'entrée
   * @param Server - reference vers le serveur qui fournit les données à écrire
   * @return retourne le flux modifié
   * */
    friend std::ostream &operator<<(std::ostream &flux, const Server &Serv);
    /**
   * @brief surcharge de l'opérateur << chargé d'écrire le dernier relevé des capteurs dans un fichier
   * @param flux - référence vers le flux d'entrée
   * @param Server - reference vers le serveur qui fournit les données à écrire
   * @return retourne le flux modifié
   * */
    friend std::ofstream &operator<<(std::ofstream &flux, const Server &Serv);

  private:
    /**
 * @brief fonction chargée de mettre en forme le flux lors de l'écriture des données dans un fichier (appelée par la surcharge de <<)
 * @param flux - référence vers le flux d'entrée
 * */
    void fileWrite(std::ofstream &flux) const;
    /**
 * @brief fonction chargée de mettre en forme le flux lors de l'écriture des données sur la console (appelée par la surcharge de <<)
 * @param flux - référence vers le flux d'entrée
 * */
    void consolWrite(std::ostream &flux) const;

    //string m_filename;
    bool m_consolActivation = true;
    bool m_logActivation = true;

    int m_lastTemp;
    int m_lastHumidity;
    int m_lastLight;
    int m_lastSound;
  };

} // namespace streamOverload
#endif // SERVER_HPP