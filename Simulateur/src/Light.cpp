/**
 *
 * @author RICHARD Antoine
 * @file Light.cpp
 * @date 01/10/2020
 * @brief La classe Light permet de gérer les capteurs de lumière
 *
*/



#include "../include/Light.hpp"

/**
*
* @brief Constructeur par défaut de la classe. Initialise les attributs.
* @return Aucun retour.
* @param Aucun paramètre.
*
*/
Light::Light()
{

}

/**
*
* @brief Constructeur par copie de la classe.
* @return Aucun retour.
* @param light_p : Référence sur l'objet à copier.
*
*/
Light::Light(const Light& light_p)
{
    
}

/**
*
* @brief Générer une valeur (une donnée) aléatoire.
* @return La valeur aléatoire générée.
* @param Aucun parametre.
*
*/
int Light::aleaGenVal() 
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
Light::~Light()
{

}
