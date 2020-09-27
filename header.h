#ifndef HEADER_H
#define HEADER_H


#include <iostream>

class Header {
public:
    Header();
    Header(const char * str);
    Header(const Header &str);
   virtual ~Header();

    Header operator=(const char * str);
    Header operator=(const Header &str);
    Header operator+(const char * str);
    Header operator+(const Header &str);

    int len(const char * str);// pour retourner la taille de ma chaine
    char *cpy(const char * str);
    char *getStr();
    int getLen();
    void print();
private:
    char *m_str;
    int m_length;
};

std::ostream &operator<<(std::ostream &out, Header &str);
#endif // HEADER_H
