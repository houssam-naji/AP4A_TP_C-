


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

	/**
	* @brief  constructeur par defaut de Serveur.
	* 
	*/
	Serveur(); // constructeur par defaut
	
	/**
	* @brief  Constructeur par recopie. 
	*
	* @param Serveur& s le Serveur que l'on va copier.
	*/
	Serveur(const Serveur& s); // constructeur par recopie
	
	/**
	* @brief  Destructeur
	*
	*/
	~Serveur(); // destructeur
	
	
	/**
	* @brief  surcharge sur = qui correspond a une copie 
	*@return un objet de type Serveur 
	*@param l'objet de type serveur que l'on veut copier
	*/
	Serveur& operator=(Serveur& s); 
	
	/**
	* @brief  surcharge sur << qui correspond a un affichage console
	*@return un ostream qui correspond a ce qu'on a affiche
	*@param le ostream d'affichage et l'objet serveur que l'on veut envoyer dans la console.
	*/
	friend std::ostream& operator<<(std::ostream& os_p, const Serveur& s_p)
	{
		if(s_p.m_consolActivation)
		{
			os_p << "Valeur de m_consolActivation : " << s_p.m_consolActivation << "\n" << "Valeur de m_logActivation :" << s_p.m_logActivation << "\n";
		
		}
		else
		{
		
			os_p << "consolActivation false : affichage console interdit\n";
		
		}
		return os_p;
	
	
	}
	
		/**
	* @brief  surcharge sur << qui correspond a une ecriture dans un fichier
	*@return un objet de type Serveur 
	*@param un entier qui sera ecrit.
	*/
	friend std::ofstream& operator<< (std::ofstream& file_p, const Serveur& s_p)
	{
		if(s_p.m_logActivation)
		{
			if(file_p.is_open())
			{
				file_p << s_p.m_consolActivation << std::endl << s_p.m_logActivation;
				file_p.close();
			}
			else
			{
				std::cout << "Failed to read the file \n";
			}	
		}
	
		return file_p;
	}
	






}






#endif Serveur_H
