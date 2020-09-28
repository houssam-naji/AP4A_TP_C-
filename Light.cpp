#include "Light.h"

Light::Light() : m_light(0)
{

}

Light::Light(const Light& l) : m_light(l.m_light)
{

}

Light::Light(bool l) : m_light(l)
{

}

Light::~Light()
{
    // Destructeur vide car aucune zone mémoire allouée
}

void Light::operator=(const Light& source)
{
    this->m_light = source.m_light;
}

bool Light::getLight()
{
    return m_light;
}

void Light::setLight(bool newLight)
{
    m_light = newLight;
}
