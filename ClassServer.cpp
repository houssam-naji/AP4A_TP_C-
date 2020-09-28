/*
 * ClasseServer.cpp
 *
 *  Created on: 28/09/2020
 *      Author: RTaquet
 */

#include "ClasseServer.hpp"
#include <ostream>
#include <iostream>
#include <fstream>
using namespace std;

bool Server::getLight()
{
	return m_light;		
}

int Server::getSound()
{
	return m_sound;		
}

float Server::getTemperature()
{
	return m_temperature;	
}

float Server::getHumidity()
{
	return m_humidity;	
}




Server& Server::operator=(const Server& Copie_Server) //Constructeur par recopie
{
	this->m_light=Copie_Server.m_light;
	this->m_sound=Copie_Server.m_sound;
	this->m_temperature=Copie_Server.m_temperature;
	this->m_humidity=Copie_Server.m_humidity;		
	return(*this);
}

std::ostream& operator<<(std::ostream& os, Server& Serv)
{
	os << " Lumière : " << Serv.Light() << " Son : " << Serv.Sound() << "Température : " << Serv.Temperature() << " Humidité : " << Serv.Humidity() << "\n";
	return os;	//Permet d'afficher les valeurs des capteurs.
}
