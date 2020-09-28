#ifndef TEMPERATURE_H
#define TEMPERATURE_H


class Temperature
{
    public:
        Temperature();
        Temperature (const Temperature& t);
        Temperature (float t/*, char u*/);
        ~Temperature();

        void operator=(const Temperature& source);

        float getTemperature();
        void setTemperature(float newTemp);

        //char getUnit();
        //void setUnit(char newUnit);

    protected:
        float m_temperature;
        //char m_unit;

        // Par simplicit� pour d�buter les unit�s seront repr�sent�es par
        // la lettre c pour les degr�s celsius et f pour fahrenheit
};

#endif // TEMPERATURE_H
