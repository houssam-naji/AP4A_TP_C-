/**
* @author rixte_marine
* @file Server.hpp
* @date 25/09/2020
* @ Permet de recevoir, de stocker, et d'afficher des données qui proviennent des capteurs
*/

#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <fstream>

/**
* @class Server
* @brief Permet de recevoir, de stocker, et d'afficher des données qui proviennent des capteurs
*/
class Server
{
	private:
					/**
					* @brief Booléen qui permet de savoir si les données seront affichées sur la consoles
					*/
					bool m_consolActivation;
					/**
					* @brief Booléen qui permet de savoir si les données sont enregistrées dans un fichier
					*/
	        bool m_logActivation;

					/**
					* @brief Paramètre qui permettent de stocker les valeurs données par les capteurs
					*/
					float m_temperature;
					float m_humidity;
					float m_light;
					float m_sound;

					/**
					* @brief Permet d'écrire les données de Server dans un fichier
					* @param ofstream& file Donne les informations du Server
					*/
					void fileWrite(std::ofstream& file) const;

					/**
					* @brief Permet d'écrire les données de Server sur la console
					* @param ofstream& file Récupère les informations du Server dans un fichier
					*/
					void consolWrite(std::ostream& flux) const;


	public:
					/**
					* @brief Permet de créer une nouvelle instance d'un objet
					*/
					Server();

					/**
					* @brief Permet de créer une nouvelle instance d'un objet en copiant les données un objet de type Serveur
					* @param Server const& serv Référence constante à copier dans la nouvelle instance
					*/
	      	Server(Server const& serv);

					/**
					* @brief Destructeur
					*/
	        virtual ~Server();

					/**
					* @brief Surcharge de l'affectation
					* @return Retourne une référence du serveur affecté
					* @param Server& serv Objet de type Server
					*/
	        Server& operator=(Server& serv);

					/**
					* @brief Surcharge de l'opérateur << de redirection vers la consoles
					* @return Retourne un ostream qui contient les données du Server
					* @param ostream& flux Donne les informations du Server
					* @param Server const& serv Référence du fichier dont on veut afficher les données
					*/
	      	friend std::ostream& operator<<(std::ostream& flux, Server const& serv);

					/**
					* @brief Surcharge de l'opérateur << de redirection vers un fichier
					* @return Retourne un ofstream qui contient les données du Server
					* @param ofstream& flux Donne les informations du Server
					* @param Server const& serv Référence du fichier dont on veut afficher les données
					*/
					friend std::ofstream& operator<<(std::ofstream& flux, Server const& serv);

					/**
					* @brief Permet de recevoir et de stocker les données reçues par les capteurs
					* @param
					*/
					void dataRcv(float value_p, char sensorType_p);

};

#endif //SERVER_H
