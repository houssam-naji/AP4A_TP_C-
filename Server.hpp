#ifndef DEF_FRACTION
#define DEF_FRACTION

#include <iostream>
#include <fstream>

class Server
{
public:
// Forme canonique
  Server();                        // Constructeur par défaut
  Server(const Server& copieServer);   // Constructeur de recopie
  ~Server();                       // Destructeur
  Server &operator=(const Server & copieServer); // Opérateur d'affectation

// Surchages
  Server(float temperature, float humidity, int sound, bool light);

// Méthodes  
  void afficher(std::ostream &flux) const; // Affiche les données de server

private:
  float m_temperature, m_humidity;
  int m_sound;
  bool m_light;
};

#endif