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

Serveur::Serveur(bool cons_p,bool log_p)
{
	this->m_consolActivation = cons_p;
	this->m_consolActivation = log_p;
	
}


Serveur::Serveur(const Serveur& s_p) 
{
	if (this != &s_p )
	{
		this->m_consolActivation = s_p.m_consolActivation;
		this->m_logActivation = s_p.m_logActivation;
	
	}
}

Serveur& Serveur::operator=(const Serveur& s_p)
{
	if (this != &s_p )
	{
		this->m_consolActivation = s_p.m_consolActivation;
		this->m_logActivation = s_p.m_logActivation;
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






