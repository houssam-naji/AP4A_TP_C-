/**
 *
 * @author RICHARD Antoine
 * @file Temperature.cpp
 * @date 01/10/2020
 * @brief La classe Temperature permet de gérer les capteurs de temperature
 *
*/



#include "../include/Temperature.hpp"

/**
*
* @brief Constructeur par défaut de la classe. Initialise les attributs.
* @return Aucun retour.
* @param Aucun paramètre.
*
*/
Temperature::Temperature()
{

}

/**
*
* @brief Constructeur par copie de la classe.
* @return Aucun retour.
* @param temperature_p : Référence sur l'objet à copier.
*
*/
Temperature::Temperature(const Temperature& temperature_p)
{
    
}

/**
*
* @brief Générer une valeur (une donnée) aléatoire.
* @return La valeur aléatoire générée.
* @param Aucun parametre.
*
*/
int Temperature::aleaGenVal() 
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
Temperature::~Temperature()
{

}
