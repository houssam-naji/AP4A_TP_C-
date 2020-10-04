#include <iostream>
#include "Server.h"
#include <string>

int main() {
    Server server_1;
    Sensor sensor_1;
    std::ofstream m_fileFlux("/home/maxime/Documents/Server/logFile.txt");

    server_1.dataRcv(sensor_1);

    std::cout<<server_1 << std::endl;

    if(m_fileFlux)
    {
        m_fileFlux<<server_1 << std::endl;
    }
    else
    {
        std::cout << "ERROR: can't open file." << std::endl;
    }

    return 0;
}
