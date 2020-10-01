/**
 *
 * @author RICHARD Antoine
 * @file Humidity.cpp
 * @date 01/10/2020
 * @brief La classe Humidity permet de gérer les capteurs d'humidité
 *
*/


#include "../include/Humidity.hpp"

/**
*
* @brief Constructeur par défaut de la classe. Initialise les attributs.
* @return Aucun retour.
* @param  Aucun paramètre.
*
*/
Humidity::Humidity()
{

}

/**
*
* @brief Constructeur par copie de la classe.
* @return Aucun retour.
* @param humidity_p : Référence sur l'objet à copier.
*
*/
Humidity::Humidity(const Humidity& humidity_p)
{
    
}

/**
*
* @brief Générer une valeur (une donnée) aléatoire.
* @return La valeur aléatoire générée.
* @param Aucun parametre.
*
*/
int Humidity::aleaGenVal() 
{
    srand(time(NULL));
    return rand() % 100;

}

/**
*
* @brief déstructeur de la classe
* @return aucun retour
* @param aucun paramètre.
*
*/
Humidity::~Humidity()
{

}
