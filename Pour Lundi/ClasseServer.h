/**
 * @author Antoine MOYSE
 * @file ClasseServer.h
 * @date 15/09/2020
 * @brief Définition de la classe Server de l'opérateur surcharge = , << vers console et << vers fichier ainsi que toutes les autres fonctions aux bon fonctionnement des opérateurs
 */

//
//Define guards
#ifndef SRC_CLASSESERVER_H_
#define SRC_CLASSESERVER_H_
#include <ostream>
#include <iostream>
#include <fstream>

/**
 * @class Server
 * @brief Classe Server pour stocker 4 valeurs de 4 capteurs
 */
class Server
{
  private:
    float s_temperature;
    float s_humidity;
	int s_sound;
	bool s_light;

  public:

	/**
	 * @brief Initialisation de la valeur température
	 * @param float qui transmet sa valeur à la variable s_temperature
	 * @return void
	 */
	void setTemperature(float t) //Fonction pour entrer une valeur pour la température (dans le code)
	{
	  s_temperature=t;
	}

	/**
	 * @brief Initialisation de la valeur humidité
	 * @param float qui transmet sa valeur à la variable s_humidity
	 * @return void
	 */
	void setHumidity(float h) //Fonction pour entrer une valeur pour l'humidité (dans le code)
	{
	  s_humidity=h;
	}

	/**
	 * @brief Initialisation de la valeur son
	 * @param int qui transmet sa valeur à la variable s_sound
	 * @return void
	 */
	void setSound(int s) //Fonction pour entrer une valeur pour le son (dans le code)
	{
	  s_sound=s;
	}

	/**
	 * @brief Initialisation de la valeur lumière
	 * @param bool qui transmet sa valeur à la variable s_light
	 * @return void
	 */
	void setLight(bool l) //Fonction pour entrer une valeur pour la lumière (dans le code)
	{
	  s_light=l;
	}

	/**
	 * @brief Récupère la valeur température
	 * @return float, la valeur de la température
	 */
	float getTemperature();

	/**
	 * @brief Récupère la valeur humidité
	 * @return float, la valeur de l'humidité
	 */
	float getHumidity();

	/**
	 * @brief Récupère la valeur son
	 * @return int, la valeur du son
	 */
	int getSound();

	/**
	 * @brief Récupère la valeur lumière
	 * @return bool, la valeur de la lumière
	 */
	bool getLight();

	/**
	 * @brief Surcharge de l'opérateur =
	 * @param objet
	 * @return Server&
	 */
	Server& operator=(const Server&);

	/**
	 * @brief Surchage de l'opérateur << vers la console
	 * @param objet
	 * @return Server&
	 */
	friend std::ostream& operator<<(std::ostream&, Server&);

	/**
	 * @brief Surcharge de l'opérateur << vers un fichier
	 * @param objet
	 * @return Server&
	 */
	friend std::ofstream& operator<<(std::ofstream&, Server&);

};

#endif // SRC_CLASSESERVER_H_
