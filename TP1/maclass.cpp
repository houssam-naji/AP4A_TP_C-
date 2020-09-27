/**
* @author Xu_Huamao
* @file MaClass.cpp
* @date 27/09/2020
* @brief Description de la classe , son objectif
*/
#include "maclass.h"
#include <fstream>
#include <iostream>
Server::Server()
{
    Temperature=0;
    Humidity=0;
    Sound=0;
    Light=false;
}

Server::Server(const Server& server){
    Temperature=server.Temperature;
    Humidity=server.Humidity;
    Sound=server.Sound;
    Light=server.Light;
}


void Server::operator=(const Server& S)
{
    Temperature=S.Temperature;
    Humidity=S.Humidity;
    Sound=S.Sound;
    Light=S.Light;
}

std::ostream &operator<<( std::ostream &output, const Server &S )
{
    output << "Temperature = " << S.Temperature << std::endl;
    output << "Humidity = " << S.Humidity << std::endl;
    output << "Sound = " << S.Sound << std::endl;
    output << "Light = " << S.Light << std::endl;
    return output;
    
}

std::ofstream &operator<<(std::ofstream & outputfile, const Server &S)
{
    outputfile.open ("output.txt");
    outputfile << "Temperature = " << S.Temperature << std::endl;
    outputfile << "Humidity = " << S.Humidity << std::endl;
    outputfile << "Sound = " << S.Sound << std::endl;
    outputfile << "Light = " << S.Light << std::endl;
    outputfile.close();
    return outputfile;
}

Server::~Server()
{

}

int main(int argc, const char * argv[]) {

    std::cout<<"Hello, World!\n";
    return 0;
}
