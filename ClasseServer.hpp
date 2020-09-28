/*
 * ClasseServer.hpp
 *
 *  Created on: 28/09/2020
 *      Author: RTaquet
 */

#ifndef SRC_CLASSESERVER_H_
#define SRC_CLASSESERVER_H_
#include <ostream>
#include <iostream>

class Server
{
	private:
		bool m_light;
		int m_sound;
		float m_temp;
		float m_humidity;		//Les variables des capteurs.


	public:

		void initLight(bool l)  //Permet de garder les variables privées 
		{
			m_light=l;
		}

		void initSound(int s) 
		{
			m_sound=s;
		}

		void initTemperature(float t) 
		{
			m_temp=t;
		}

		void initHumidity(float h) 
		{
			m_humidity=h;
		}

		bool getLight();
		int getSound();
		float getTemperature();
		float getHumidity();	

		Server& operator=(const Server&);  

		friend std::ostream& operator<<(std::ostream&, Server&);  //Fonction d'affichage de la classe

};

#endif // SRC_CLASSESERVER_H_