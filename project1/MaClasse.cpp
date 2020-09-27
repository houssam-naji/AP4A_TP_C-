/**
 * @author Xu_Chenfan
 * @file MaClasse.cpp
 * @date 26/9/2020
 * @brief Description de la classe , son objectif
 */

 //
 // Define guards
#include "MaClasse.h"

Server::Server()
{
    Temperature=0;
    Humidity=0;
    Sound=0;
    Light=false;
    //ctor
}

Server::Server(const Server& server)
{
    Temperature=server.Temperature;
    Humidity=server.Humidity;
    Sound=server.Sound;
    Light=server.Light;
}

Server::~Server()
{
    //dtor
}

void Server::operator=(const Server& D)
{
    Temperature=D.Temperature;
    Humidity=D.Humidity;
    Sound=D.Sound;
    Light=D.Light;
}

std::ostream &operator<<( std::ostream &output, const Server &D )
{
    output<<"Temperature:"<<D.Temperature<<std::endl;
    output<<"Humidity:"<<D.Humidity<<std::endl;
    output<<"Sound:"<<D.Sound<<std::endl;
    output<<"Light:"<<D.Light<<std::endl;
    return output;
}

std::ofstream &operator<<(std::ofstream & outfileput, const Server &D)
{
    outfileput.open("data.txt",std::ios::app);
    outfileput<<"Temperature:"<<D.Temperature<<std::endl;
    outfileput<<"Humidity:"<<D.Humidity<<std::endl;
    outfileput<<"Sound:"<<D.Sound<<std::endl;
    outfileput<<"Light:"<<D.Light<<std::endl;
    outfileput.close();
    return outfileput;
}
