#include "MyObject.h"
#include <iostream>
#include <ostream>
#include <fstream>

/**
 *  @author renault_erwan
 *  @file MyObject.cpp
 *  @date 27/09/2020
 *  @brief Cette classe est un demosntrateur me permettant d'implementer quelques unes des methodes élémentaires de c++
 */

MyObject::MyObject(int data1_p, int data2_p)
{
  m_data1 = data1_p;
  m_data2 = data2_p;
}

MyObject::~MyObject()
{

}

std::ostream& operator<<(std::ostream& stream_p, MyObject& object_p)
{
  stream_p << "m_data1:" << object_p.m_data1 << " - m_data2:" << object_p.m_data2;
  return stream_p;
}

std::ofstream& operator<<(std::ofstream& referenceSurOut_p, MyObject& object_p)
{
  out_p << "m_data1:" << object_p.m_data1 << " - m_data2:" << object_p.m_data2;
  return referenceSurOut_p;
}

MyObject& MyObject::operator=(const MyObject& referenceSurLautreObjet_p)
{
  this->m_data1 = other_p.m_data1;
  this->m_data2 = other_p.m_data2;
  return (*this);
}

