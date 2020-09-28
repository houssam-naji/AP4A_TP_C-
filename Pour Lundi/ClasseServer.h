/**
 * @author Antoine MOYSE
 * @file ClasseServer.h
 * @date 15/09/2020
 * @brief D�finition de la classe Server de l'op�rateur surcharge = , << vers console et << vers fichier ainsi que toutes les autres fonctions aux bon fonctionnement des op�rateurs
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
	 * @brief Initialisation de la valeur temp�rature
	 * @param float qui transmet sa valeur � la variable s_temperature
	 * @return void
	 */
	void setTemperature(float t) //Fonction pour entrer une valeur pour la temp�rature (dans le code)
	{
	  s_temperature=t;
	}

	/**
	 * @brief Initialisation de la valeur humidit�
	 * @param float qui transmet sa valeur � la variable s_humidity
	 * @return void
	 */
	void setHumidity(float h) //Fonction pour entrer une valeur pour l'humidit� (dans le code)
	{
	  s_humidity=h;
	}

	/**
	 * @brief Initialisation de la valeur son
	 * @param int qui transmet sa valeur � la variable s_sound
	 * @return void
	 */
	void setSound(int s) //Fonction pour entrer une valeur pour le son (dans le code)
	{
	  s_sound=s;
	}

	/**
	 * @brief Initialisation de la valeur lumi�re
	 * @param bool qui transmet sa valeur � la variable s_light
	 * @return void
	 */
	void setLight(bool l) //Fonction pour entrer une valeur pour la lumi�re (dans le code)
	{
	  s_light=l;
	}

	/**
	 * @brief R�cup�re la valeur temp�rature
	 * @return float, la valeur de la temp�rature
	 */
	float getTemperature();

	/**
	 * @brief R�cup�re la valeur humidit�
	 * @return float, la valeur de l'humidit�
	 */
	float getHumidity();

	/**
	 * @brief R�cup�re la valeur son
	 * @return int, la valeur du son
	 */
	int getSound();

	/**
	 * @brief R�cup�re la valeur lumi�re
	 * @return bool, la valeur de la lumi�re
	 */
	bool getLight();

	/**
	 * @brief Surcharge de l'op�rateur =
	 * @param objet
	 * @return Server&
	 */
	Server& operator=(const Server&);

	/**
	 * @brief Surchage de l'op�rateur << vers la console
	 * @param objet
	 * @return Server&
	 */
	friend std::ostream& operator<<(std::ostream&, Server&);

	/**
	 * @brief Surcharge de l'op�rateur << vers un fichier
	 * @param objet
	 * @return Server&
	 */
	friend std::ofstream& operator<<(std::ofstream&, Server&);

};

#endif // SRC_CLASSESERVER_H_
