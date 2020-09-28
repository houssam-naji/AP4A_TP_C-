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

        // Id�e pour la suite : L'�clairement ext�rieur varie de 5 � 120 000 lux.
        // On pourrait transformer le bool�in en int afin d'avoir des donn�es plus pr�cises et proche de la r�alit�.

};

#endif // LIGHT_H
