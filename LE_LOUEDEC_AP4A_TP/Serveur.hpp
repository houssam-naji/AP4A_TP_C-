


#ifndef Serveur_H
#define Serveur_H

#
/**
* @author AxelLeLouedec
* @file Server.hpp
* @date 25/09/2020
* @brief La classe serveur a pour objectif de recevoir, stocker et afficher *les donnees envoyees par les capteurs de la cabine : cela de traduit dans *l'utilisation des methodes fileWrite et consoleWrite
*
*/
#include <string>
#include <iostream>
#include <fstream>

class Serveur 
{
private:

	bool m_consolActivation;
	bool m_logActivation;
	

public:

	bool getM_ConsolActivation();
	bool getM_LogActivation();

	Serveur(); // constructeur par defaut
	
	Serveur(const Serveur& s); // constructeur par recopie
	
	~Serveur(); // destructeur
	
	
	/**
	* @brief  surcharge sur = qui correspond a une copie 
	*@return un objet de type Serveur 
	*@param l'objet de type serveur que l'on veut copier
	*/
	Serveur& operator=(Serveur& s); 
	
	/**
	* @brief  surcharge sur << qui correspond a un affichage console
	*@return un objet de type Serveur 
	*@param la chaine de characteres que l'on veut afficher
	*/
	Serveur& operator<<(std::string myString);
	
		/**
	* @brief  surcharge sur << qui correspond a une ecriture dans un fichier
	*@return un objet de type Serveur 
	*@param un entier qui sera ecrit.
	*/
	Serveur& operator<<(const int& typeexemple);
	






}






#endif Serveur_H
