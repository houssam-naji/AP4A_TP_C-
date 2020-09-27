/**
 * @author Grégori MIGNEROT
 * @file Server.hpp
 * @date 27/09/2020
 * @brief Traitement, stockage et affichage des données en provenance des capteurs
 */


#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>
#include <vector>

/**
 * @class Server
 * @brief Centralise le stockage et l'affichage des données en provenance des capteurs
 */
class Server
{
public:
  // Définition de la forme canonique

  /**
   * @brief Constructeur par défaut
   */
  Server();

  /**
   * @brief Constructeur de recopie
   * @param copied Server à recopier
   */
  Server(const Server& copied);

  /**
   * @brief Destructeur
   */
  ~Server();

  /**
   * @brief Opérateur d'affectation
   * @return Référence sur l'objet
   * @param copied Serveur à affecter
   */
  Server& operator=(const Server& copied);

  // Log et affichage

  friend std::ofstream& operator<<(std::ofstream& stream, const Server& server);
  friend std::ostream& operator<<(std::ostream& stream, const Server& server);

private:
  // Mesures reçues. Sera remplacé par la récupération et le logging direct des données reçues du Scheduler
  // Note : Mesure contiendra une valeur, la date à laquelle elle a été effectuée, et la grandeur qu'elle représente (lumière, humidité, …)
  std::vector<Mesure> m_mesures;
};

/**
 * @brief Redirection vers un fichier de log
 * @return Référence sur le flux passé en paramètre
 * @param stream Flux de sortie représentant le fichier
 */
std::ofstream& operator<<(std::ofstream& stream, const Server& server);

/**
 * @brief Redirection vers un autre flux (typiquement la console)
 * @return Référence sur le flux passé en paramètre
 * @param stream Flux de sortie où écrire
 */
std::ostream& operator<<(std::ostream& stream, const Server& server);

#endif
