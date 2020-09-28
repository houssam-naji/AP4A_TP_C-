#ifndef HUMIDITY_H
#define HUMIDITY_H


class Humidity
{
    public:
        Humidity();
        Humidity(const Humidity& h);
        Humidity(float h);
        ~Humidity();

        void operator=(const Humidity& source);

        float getHumidity();
        void setHumidity(float newHum);

    protected:
        float m_humidity;
        // Sans unité car rapport de pression - ex : 0.5 ce qui correspond à 50%
};

#endif // HUMIDITY_H
