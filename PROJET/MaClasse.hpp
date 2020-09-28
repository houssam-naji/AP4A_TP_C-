#ifndef MACLASSE_H
#define MACLASSE_H
#include <iostream>


class Server
{
    
public:
    bool m_consolActivation;
    bool m_logActivation;

    Server();   //Constructeur par défaut
    Server(const Server& );   //Constructeur de recopie
    ~Server();  //Destructeur
    Server operator=(const Server& );
    friend std::ostream& operator<<(std::ostream&, const Server&);



};

std::ostream& operator<<(std::ostream&, const Server&);



#endif  //MACLASSE_H