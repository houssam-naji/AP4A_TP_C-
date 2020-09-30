#include "server.h"
#include<iostream>
#include<fstream>
using namespace std;

const server& server::operator=(const server&a){
    if(this==&a)
    {
        return *this;
    }
    m_t=a.m_t;
    m_h=a.m_h;
    m_l=a.m_l;
    m_s=a.m_s;
}

ostream& operator<<(ostream& out, const server& b){
    out<<b.m_t<<b.m_h<<b.m_l<<b.m_s;
    return out;
}

ofstream& operator<<(ofstream& outfile, const server& c){
    outfile.open("/home/tp/log");
    outfile<<c.m_t<<c.m_h<<c.m_l<<c.m_s;
    outfile.close();
    return outfile;
}
