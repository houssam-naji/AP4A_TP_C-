#include "Server.h"
#include <fstream>

Server::Server(): Sensor(), m_consolActivation(0), m_logActivation(0)
{

}

Server::Server(const Server& s) : m_consolActivation(s.m_consolActivation), m_logActivation(s.m_logActivation), Sensor(s.m_dataGlobal)
{

}

Server::~Server()
{
    // Destucteur vide car aucune mémoire à libérer
}

void Server::operator=(const Server& s)
{
    if (&s != this)
    {
        this->m_consolActivation = s.m_consolActivation;
        this->m_logActivation = s.m_logActivation;
    }
}



std::ostream& operator<<(std::ostream& os, Server &s)
{
    int choice;
    std::cout << "Voulez-vous : \n 1. Afficher sur la console les donnees \n 2. Sauvegarder les donnees dans un fichier \n";
    std::cout << "Choix (1 ou 2) : ";
    std::cin >> choice;

    while (choice != '1' || choice != '2')
    {
        std::cin >> choice;
    }
    // Permets d'éviter que l'utilisateur rentre autre chose que 1 ou 2

    if (choice == '1')
    {
        s.print(os);
    }

    else
    {
        std::ofstream os {"save_data.txt", std::ios::app};
        os << "Temperature : " << s.getTemperature()<< "\n";
        os << "Humidite : " << s.getHumidity() << "\n";
        os << "Son : " << s.getSound() << "\n";
        os << "Luminosite : " << s.getLight() << "\n";
        os.close();
        // Il faut bien ouvrir le fichier et le fermer avant de lancer <<
        // std::ofstream flow {"save_data.txt", std::ios::app};

    }

    return os;
}


// La méthode print me permet de conserver l'encapsulation :
void Server::print(std::ostream& os)
{
    os << " Temperature : " << getTemperature()
    << "\n Humidity : " << getHumidity()
    << "\n Sound : " << getSound()
    << "\n Light : " << getLight();
}

