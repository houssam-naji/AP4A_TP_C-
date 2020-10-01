/**
 *
 * @author RICHARD Antoine
 * @file Sound.cpp
 * @date 01/10/2020
 * @brief La classe Sound permet de gérer les capteurs de son
 *
*/



#include "../include/Sound.hpp"

/**
*
* @brief Constructeur par défaut de la classe. Initialise les attributs.
* @return Aucun retour.
* @param Aucun paramètre.
*
*/
Sound::Sound()
{

}

/**
*
* @brief Constructeur par copie de la classe.
* @return Aucun retour.
* @param sound_p : Référence sur l'objet à copier.
*
*/
Sound::Sound(const Sound& sound_p)
{
    
}

/**
*
* @brief Générer une valeur (une donnée) aléatoire.
* @return La valeur aléatoire générée.
* @param Aucun parametre.
*
*/
int Sound::aleaGenVal() 
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
Sound::~Sound()
{

}
