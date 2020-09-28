#include "Sound.h"

Sound::Sound() : m_sound(0)
{

}

Sound::Sound(const Sound& s): m_sound(s.m_sound)
{

}

Sound::Sound(int s): m_sound(s)
{

}

Sound::~Sound()
{
    // Destructeur vide car aucune zone mémoire allouée
}

void Sound::operator=(const Sound& source)
{
    this->m_sound = source.m_sound;
}

int Sound::getSound()
{
    return m_sound;
}

void Sound::setSound (int newSound)
{
    m_sound = newSound;
}
