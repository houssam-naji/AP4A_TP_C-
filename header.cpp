#include "header.h"

#include <iostream>
using namespace std;


Header::Header() : m_str(NULL), m_length(0) {

}

Header::Header(const char * str) {
    m_str = cpy(str);
    m_length = len(str);
}

Header::Header(const Header &str) {
    m_str = cpy(str.m_str);
    m_length = str.m_length;
}

Header::~Header() {
    delete[] m_str;
}

Header Header::operator=(const char * str) {
    delete[] m_str;
    m_str = cpy(str);
    m_length = len(str);
    return *this;
}

Header Header::operator=(const Header &str) {
    delete[] m_str;
    m_str = cpy(str.m_str);
    m_length = str.m_length;
    return *this;
}

Header Header::operator+(const char * str) {
    int size = m_length + len(str);
    char *newStr = new char[size+1];

    for (int i = 0; i < m_length; i++)
        newStr[i] = m_str[i];

    for (int i = m_length; i < size; i++)
        newStr[i] = str[i - m_length];

    newStr[size] = '\0';

    Header res = newStr;
    delete[] newStr;
    return res;
}

Header Header::operator+(const Header &str) {
    int size = m_length + str.m_length;
    char *newStr = new char[size+1];

    for (int i = 0; i < m_length; i++)
        newStr[i] = m_str[i];

    for (int i = m_length; i < size; i++)
        newStr[i] = str.m_str[i - m_length];

    newStr[size] = '\0';

    Header res = newStr;
    delete[] newStr;
    return res;
}

int Header::len(const char * str) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char * Header::cpy(const char * str) {
    int size = len(str);
    char *cpdStr = new char[size+1];
    for (int i = 0 ; i < size ; i++)
        cpdStr[i] = str[i];
    cpdStr[size] = '\0';
    return cpdStr;
}

char * Header::getStr() {
    return m_str;
}

int Header::getLen() {
    return m_length;
}

void Header::print() {
    std::cout << m_str << std::endl;
}



std::ostream &operator<<(ostream &out, Header &str) { //ici
    out << str.getStr();
    return out;
}


