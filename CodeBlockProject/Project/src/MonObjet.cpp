/**
 *  @author renault_erwan
 *  @file MonObjet.cpp
 *  @date 27/09/2020
 *  @brief Cette class est un demosntrateur me permettant d'implementer quelques unes des methodes élémentaires du c++
 */

#include "MonObjet.h"
#include <iostream>
#include <ostream>
#include <fstream>

MonObjet::MonObjet(int donnee1_p, int donnee2_p)
{
  m_donnee1 = donnee1_p;
  m_donnee2 = donnee2_p;
}

MonObjet::~MonObjet()
{

}

MonObjet& MonObjet::operator=(const MonObjet& referenceSurLautreObjet_p)
{
  this->m_donnee1 = referenceSurLautreObjet_p.m_donnee1;
  this->m_donnee2 = referenceSurLautreObjet_p.m_donnee2;
  return (*this);
}

std::ostream& operator<<(std::ostream& referenceSurStream_p, MonObjet& objet_p)
{
  referenceSurStream_p << "m_donnee1 : " << objet_p.m_donnee1 << "\tm_donnee2 : " << objet_p.m_donnee2;
  return referenceSurStream_p;
}

std::ofstream& operator<<(std::ofstream& referenceSurSortie_p, MonObjet& objet_p)
{
  referenceSurSortie_p << "m_donnee1 : " << objet_p.m_donnee1 << "\tm_donnee2 : " << objet_p.m_donnee2;
  return referenceSurSortie_p;
}


