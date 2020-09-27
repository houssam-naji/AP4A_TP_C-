/**
* @author BOUNNIT
* @file Server.hpp
* @date 27/09/2020
* @La classe "Server" permet de recevoir, de stocker et d'afficher les données envoyées provenant des capteurs de la cabine de l'avion.
*/
//
// Define guards
#ifndef SERVER_H
#define SERVER_H
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

class Server
 {
 private:
   bool m_consolActivation, m_logActivation;
 public:
  Server(); //constructeur par defaut
  Server(bool cons,bool log); //constructeur
  Server(const Server& s); //constructeur par recopie
  ~Server(); //destructeur
  void afficherServer(); //afficher server
  /**
	*@brief surcharge de l'opérateur "="
	*@return un objet de type Server
	*@param un objet de type Server
	*/
  Server& operator=(const Server& s);
  /**
  *
  * @brief Surcharge de l'operateur "<<" qui redirige vers la console.
  * @return cons: Référence sur un objet ostream.
  * @param cons: Référence sur un objet ostream.
  * @param server: Objet de la classe Server pour lequel on veut afficher les données.
  *
  */
  friend std::ostream& operator<<(std::ostream& cons, const Server& s);
  /**
  *
  * @brief Surcharge de l'operateur "<<" qui redirige vers un fichier.
  * @return file: Référence sur un objet ofstream.
  * @param file: Référence sur un objet ofstream.
  * @param s: Objet de la classe Server pour lequel on veut logger les données.
  *
  */
  friend std::ofstream& operator<<(std::ofstream& file, const Server& s);
};

#endif // SERVER_H
