/**
* @author pierre_clerc
* @file Server.hpp
* @date 05 / 10 / 2020
* @brief Fichier hpp de la classe Server.cpp
*/
#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>
#include <fstream>

class Server
{
public:
// Forme canonique
  Server();
  Server(const Server& copieServer);
  ~Server();
  Server &operator=(const Server& copieServer);

// Surchages
  Server(float temperature, float humidity, int sound, bool light);

// Méthodes  
  void afficher(std::ostream& flux) const;

private:
  float m_temperature, m_humidity;
  int m_sound;
  bool m_light;
};

#endif