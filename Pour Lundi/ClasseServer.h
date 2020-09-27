/*
 * ClasseServer.h
 *
 *  Created on: 26 sept. 2020
 *      Author: antoi
 */

#ifndef SRC_CLASSESERVER_H_
#define SRC_CLASSESERVER_H_
#include <ostream>
#include <iostream>

class Server
{
	private:
		float s_temperature;
		float s_humidity;		//Toutes les valeurs présentent dans le serveur.
		int s_sound;
		bool s_light;

	public:
		void setTemperature(float t) //Fonction pour entrer une valeur pour la température (dans le code)
		{
			s_temperature=t;
		}

		void setHumidity(float h) //Fonction pour entrer une valeur pour l'humidité (dans le code)
		{
			s_humidity=h;
		}

		void setSound(int s) //Fonction pour entrer une valeur pour le son (dans le code)
		{
			s_sound=s;
		}

		void setLight(bool l) //Fonction pour entrer une valeur pour la lumière (dans le code)
		{
			s_light=l;
		}

		float getTemperature();
		float getHumidity();	//Fonctions qui retourne les valeurs température, humidité, son et lumière qui sont toutes en private
		int getSound();
		bool getLight();

		Server& operator=(const Server&);  //Fonction constructeur par clonage

		friend std::ostream& operator<<(std::ostream&, Server&);  //Fonction qui permet d'afficher la classe

};

#endif // SRC_CLASSESERVER_H_
