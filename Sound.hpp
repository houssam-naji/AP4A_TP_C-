/**
* @author Valentin Mercy
* @file Sound.hpp
* @date 26/09/2020
* @brief Definition of sound class derivating from Sensor base class
*/
#include "Sensor.hpp"

#ifndef SOUND_HPP
#define SOUND_HPP

/**
 * @class Sound
 * @brief this class is derivating from Sensor base class
 */

class Sound : public Sensor
{
private:
  //TODO: define a specific type
public:
  Sound();
  ~Sound();
};

Sound::Sound()
{
}

Sound::~Sound()
{
}

#endif // SOUND_HPP
