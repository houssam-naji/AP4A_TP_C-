#ifndef LIGHT_H
#define LIGHT_H


class Light
{
    public:
        Light();
        Light(const Light& l);
        Light(bool l);
        ~Light();

        void operator=(const Light& source);

        bool getLight();
        void setLight(bool newLight);

    protected:

        bool m_light; // 0 : la nuit et 1 : le jour

        // Idée pour la suite : L'éclairement extérieur varie de 5 à 120 000 lux.
        // On pourrait transformer le booléin en int afin d'avoir des données plus précises et proche de la réalité.

};

#endif // LIGHT_H
