#include <iostream>
#include "Light.hpp"

using namespace std;

bool Light::getLumiere()
{
    return m_light;
}

void Light::aleaGenVal()
{
    int nb = rand()%19;    /// Nombre aléatoire entre 0 et 19
    if(nb<10)
    {
        m_light = true;    /// Entre [0,9] return lumière allumée
    }
    else
    {
        m_light = false;   /// Entre [10,19] return lumière éteinte
    }
}
