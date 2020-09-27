/**
 * @author Cyril Obrecht
 * @file Server.hpp
 * @date 21/09/2020
 * @brief La class Server doit permettre de recevoir, de stocker et d'afficher des données en provenace de capteur.
 */

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <string>
#include <fstream>


/**
 * @class Server
 * @brief Class ayant pour objectif de représenté un server, elle permet de stocker et dafficher des données en provenance de capteur. le stockage s'effectue dans un fihier dont le nom est donné en paramètre au constructeur.En cas d'erreur d'ouverture du fichier de log elle sont redirigé avec un message d'erreur vers cerr.
 */
class Server
{
	std::fstream m_file;
	std::string m_filename;

public:
	//==//==Constructeurs==//==//
	
	/**
	 * @brief constructeur de la class.
	 * @param filename_p Le nom du fichier qui dans lequel les logs serons écrient.
	 */
	Server(std::string filename_p);
	
	/**
	 * @brief constructeur par copie de la class
	 * @param server_p Le Server a copier le nouveaux Server écrira les logs dans le même fichier que celui copier.
	 */
	Server(const Server& server_p);
	
	//==//==Destructeur==//==//
	
	/**
	 * @brief Destructeur de la class. Il ferme le fichier de logs.
	 */
	~Server();
	
	//==//==Méthode==//==//
	
	/**
	 * @brief Permet d'envoyer au server des donnée sous la forme de chaine de caractère.
	 * @param msg_p Les donnée a envoyer sous forme de chaine de caractère.
	 * @param sensorType_p Une chaine de caractère qui seras ajouté au log afin de facilité leur retaritement et permettant de connaitre la provenace des données.
	 */
	void send(std::string msg_p,std::string sensorType_p);
	
	//==//==Opérateur surcharger==//==//
	
	/**
	 * @brief Surcharge de l'opérateur "=" permetant la copie.
	 * @return Une référence vers le server qui copiais les données.
	 * @param serv_p le server a copier.
	 */
	Server& operator=(const Server& serv_p);
	
	//==//==Getter==//==//
	
	/**
	 * @brief Permet de savoir si le fichier de log est ouver. 
	 * @return Un booléan valant vrai si le fichier est ouvert faux sinon.
	 */
	bool isLogFileOpen() const;
	
	/**
	 * @brief Getter du nom du fichier de log.
	 * @return Le nom du fichier de log.
	 */
	std::string getFilename() const;
	
};


//==//==Opérateur surcharger==//==//

/**
 * @brief Surcharge de l'opérateur "<<"
 * @return Renvoie le paramètre flux_p
 * @param flux_p Le flux de donnée où il est demandé d'écrire.
 * @param server_p Le server a écrire dans le flux de donnée.
 */
std::ostream& operator<<( std::ostream& flux_p , Server const& server_p);

#endif // SERVER_H
