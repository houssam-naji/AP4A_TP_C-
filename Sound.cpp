#include <iostream>
#include "Sound.hpp"

using namespace std;

int Sound::getSon()
{
    return m_sound;
}

void Sound::aleaGenVal()
{
    m_sound = rand()%30 +20;  /// Intensité sonore aléatoire en 20 et 50 dB
}
