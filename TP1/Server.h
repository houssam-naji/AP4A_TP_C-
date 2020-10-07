#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#include<iostream>
#include<fstream>
using namespace std;

class Server
{
    float m_t,m_h;
    int m_s;
    bool m_l;
    private:
    bool consolActivation, logActivation;

    public:
      Server(){};
      Server(const Server &s){};
      virtual ~Server(){};
      void operator=(const Server& s);
      friend std::ofstream operator <<(std::ofstream &out,const Server &a);
	  friend std::ofstream operator <<(std::ofstream &outfile,const Server &b);
     // void dataRcv (Type type);

   // private:
      //void fileWrite(Type type);
     // void consolWrite(Type type);
};

Server::Server()
{
   m_t=0;
   m_h=0;
   m_s=0;
   m_l=false;
   consolActivation = false;
   logActivation = false;

}
Server::Server(const Server&s)
{
    m_t=s.m_t;
    m_h=s.m_h;
    m_s=s.m_s;
    m_l=s.m_l;
    consolActivation = s.consolActivation;
    logActivation = s.logActivation;
}

Server::~Server()
{

}

void Server::operator=(const Server& s)
{
    if (&s!= this)
    {
        this->m_t=s.m_t;
        this->m_h=s.m_h;
        this->m_s=s.m_s;
        this->m_l=s.m_l;
        this->consolActivation = s.consolActivation;
        this->logActivation = s.logActivation;
    }
}

std::ofstream &operator <<(std::ofstream &out, const Server &a)
{
    out<<"Temperature:"<a.m_t<<std::endl;
    out<<"Humidity:"<<a.m_h<<std::endl;
    out<<"Sound:"<<a.m_s<<std::endl;
    out<<"Light:"<<a.m_l<<std::endl;
    return out;
}

std::ofstream &operator<<(std::ofstream &outfile, const Server &b)
{
    outfile.open("data.txt",std::ios::app);
    outfile<<"Temperature:"<<b.m_t<<std::endl;
    outfile<<"Humidity:"<<b.m_h<<std::endl;
    outfile<<"Sound:"<<b.m_s<<std::endl;
    outfile<<"Light:"<<b.m_l<<std::endl;
    outfile.close();
    return outfile;
}

#endif // SERVER_H_INCLUDED
