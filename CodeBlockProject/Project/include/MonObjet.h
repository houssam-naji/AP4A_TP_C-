/**
 *  @author renault_erwan
 *  @file MonObjet.h
 *  @date 27/09/2020
 *  @brief Cette class est un demosntrateur me permettant d'implementer quelques unes des methodes élémentaires du c++
 */

#ifndef MONOBJET_H
#define MONOBJET_H
#include <iostream>
#include <ostream>
#include <fstream>

/**
 *  @class MonObjet
 *  @brief Cette class implemente quelques methodes élémentaires du c++
 */
class MonObjet
{
  public:
  /**
   *  @brief Constructeur de l'objet
   *  @param donnee1_p: entier correspondant à la donnée 1 de l'objet, donnee2_p: entier correspondant à la donnée 2 de l'objet
   */
    MonObjet(int, int);

  /**
   *  @brief Destructeur de l'objet
   */
    virtual ~MonObjet();

  /**
   *  @brief Cette surcharge de l'opérateur "=" permet d'asigner une instance de type "MonObjet" à une autre instance de type objet
   *  @return retourne une référence de l'instance à laquel fut assigné l'autre objet
   *  @param referenceSurLautreObjet_p correspond à l'instance à copier
   */
    MonObjet& operator=(const MonObjet&);

  /**
   *  @brief Cette surcharge de l'opérateur "<<" permet d'utiliser la fonction de sortie de c++ (pour afficher l'objet dans la console)
   *  @return retourne une référence de l'objet ostream (la même que celle passée en parametre)
   *  @param referenceSurStream_p: objet de std::ostream, objet_p: objet à afficher
   */
    friend std::ostream& operator<<(std::ostream&, MonObjet&);

  /**
   *  @brief Cette surcharge de l'opérateur "<<" permet d'utiliser la fonction de sortie de c++ (pour imprimer l'objet dans un fichier)
   *  @return retourne une référence de l'objet ofstream (la même que celle passée en parametre)
   *  @param referenceSurSortie_p: objet de ofstream, objet_p: objet à imprimer
   */
    friend std::ofstream& operator<<(std::ofstream&, MonObjet&);

  protected:

  private:
    int m_donnee1;  //donnée 1
    int m_donnee2;  //donnée 2
};

#endif // MYOBJECT_H
