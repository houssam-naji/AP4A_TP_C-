/**
 *
 * @author RICHARD Antoine
 * @file Server.cpp
 * @date 24/09/2020
 * @brief La classe Server permet de recevoir, de stocker et d'afficher les données
 *        envoyés provenant des capteurs de la cabine de l'avion.
 *
 */



#include "../include/Sensor.hpp"

/**
*
* @brief Constructeur par défaut de la classe. Initialise les attributs.
* @return Aucun retour.
* @param Aucun paramètre.
*
*/
Sensor::Sensor()
{

}

/**
*
* @brief Accesseur aux données du capteur
* @return Les données du capteur
* @param aucun paramètre.
*
*/
int Sensor::getData() {
    return this->aleaGenVal();
}

/**
*
* @brief déstructeur de la classe
* @return aucun retour
* @param aucun paramètre.
*
*/
Sensor::~Sensor()
{

}
