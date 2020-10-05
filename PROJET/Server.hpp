#ifndef SERVER_H
#define SERVER_H
#include <iostream>


class Server
{
private:

    bool m_consolWriteActivation;
    bool m_fileWriteActivation;
    float m_temperature;
    float m_humidity;
    float m_light;
    float m_sound;


public:

    Server();   //Constructeur par défaut
    Server(const Server& server_p);   //Constructeur de recopie
    ~Server();  //Destructeur

    Server operator=(const Server& server_p);
    friend std::ofstream& operator<<(std::ofstream& file, const Server& server_p);
    friend std::ostream& operator<<(std::ostream& console, const Server& server_p);

    void dataRcv(float temperature_p, float humidity_p, float light_p, float sound_p);
    void fileWrite(std::ofstream& file);
    void consolWrite(std::ostream& consol);

};

std::ofstream& operator<<(std::ofstream& file, const Server& server_p);
std::ostream& operator<<(std::ostream& consol, const Server& server_p);


#endif  //SERVER_H