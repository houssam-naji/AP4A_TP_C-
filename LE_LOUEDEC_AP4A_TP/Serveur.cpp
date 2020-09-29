/**
* @author AxelLeLouedec
* @file Server.cpp
* @date 25/09/2020
* @brief La classe serveur a pour objectif de recevoir, stocker et afficher *les donnees envoyees par les capteurs de la cabine : cela de traduit dans *l'utilisation des methodes fileWrite et consoleWrite
*
*/
#include <string>
#include <iostream>
#include <fstream>
#include "Serveur.hpp"

Serveur::Serveur()
{
	this->m_consolActivation = false;
	this->m_logActivation = false;
}

Serveur::~Serveur()
{
	delete &m_consolActivation;
	delete &m_logActivation;
}

Serveur::Serveur(bool cons,bool log)
{
	this->m_consolActivation = cons;
	this->m_consolActivation = log;
	
}


Serveur::Serveur(const Serveur& s) 
{
	if (this != &s )
	{
		this->m_consolActivation = s.m_consolActivation;
		this->m_logActivation = s.m_logActivation;
	
	}
}

Serveur& Serveur::operator=(const Serveur& s)
{
	if (this != &s )
	{
		this->m_consolActivation = s.m_consolActivation;
		this->m_logActivation = s.m_logActivation;
	}
	
	return *this;
}


bool Serveur::getM_ConsolActivation()
{
	return &(this->m_consolActivation);
}

bool Serveur::getM_LogActivation()
{
	return &(this->m_LogActivation);
}






