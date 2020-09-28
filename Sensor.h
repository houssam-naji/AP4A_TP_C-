#ifndef SENSOR_H
#define SENSOR_H

#include "Temperature.h"
#include "Humidity.h"
#include "Sound.h"
#include "Light.h"


class Sensor : public Temperature, public Humidity, public Sound, public Light
{
    public:
        Sensor();
        Sensor(const Sensor& s);
        Sensor(Temperature t, Humidity h, Sound s, Light l);
        ~Sensor();

        Sensor getData();
        // Comme on doit récuper 4 informations, donc on utilise la classe comme type de retour

        int aleaGenVal();
        //Int ou autre, à voir enuite, compréhesnion de la fonction vague

    protected:
        Temperature m_dataTemperature;
        Humidity m_dataHumidity;
        Sound m_dataSound;
        Light m_dataLight;

};

#endif // SENSOR_H
