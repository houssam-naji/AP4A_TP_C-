#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <stdlib.h>
#include "Scheduler.h"
#include "Sensor.h"

class Server : public Scheduler, public Sensor
{
    public:
        Server();
        Server(const Server& s);
        ~Server();

        // Copie le contenue d'un object (différent du contrcuteur par copie):
        void operator=(const Server& s);

        //Redirection vers la console ou vers un fichier:
        friend std::ostream& operator<<(std::ostream& os, Server& s);
        void print(std::ostream& os);

        // L’opérateur << a été déclaré « friend » afin de lui permettre d’accéder aux
        // données « private » de la classe « Server ».

        void dataRcv();
        void fileWrite();

    private:
        bool m_consolActivation;
        bool m_logActivation;
        Sensor m_dataGlobal;
};

#endif // SERVER_H
