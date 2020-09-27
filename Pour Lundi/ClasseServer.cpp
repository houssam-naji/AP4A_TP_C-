/*
 * ClasseServer.cpp
 *
 *  Created on: 26 sept. 2020
 *      Author: antoi
 */

#include "ClasseServer.h"
#include <ostream>
#include <iostream>
#include <fstream>
using namespace std;

float Server::getTemperature()
{
	return s_temperature;	//Retourne la valeur de la temp�rature qui est priv�e
}

float Server::getHumidity()
{
	return s_humidity;	//Retourne la valeur de l'humidit� qui est priv�e
}

int Server::getSound()
{
	return s_sound;		//Retourne la valeur du son qui est priv�e
}

bool Server::getLight()
{
	return s_light;		//Retourne la valeur de la lumi�re qui est priv�e
}

Server& Server::operator=(const Server& Copie_Server)
{
	this->s_temperature=Copie_Server.s_temperature;
	this->s_humidity=Copie_Server.s_humidity;		//"Clone" les valeurs du premier serveur vers le deuxi�me
	this->s_sound=Copie_Server.s_sound;
	this->s_light=Copie_Server.s_light;
	return(*this);
}

std::ostream& operator<<(std::ostream& os, Server& LeServ)
{
	os << "Temperature : " << LeServ.getTemperature() << " Humidit� : " << LeServ.getHumidity() << " Son : " << LeServ.getSound() << " Lumi�re : " << LeServ.getLight()<< "\n";
	return os;	//Affiche toutes les valeurs de la classe serveur grace aux fonctions get.
}
