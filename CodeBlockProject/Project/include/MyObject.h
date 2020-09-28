#ifndef MYOBJECT_H
#define MYOBJECT_H
#include <iostream>
#include <ostream>
#include <fstream>


class MyObject
{
  public:
    MyObject(int, int);
    virtual ~MyObject();
    MyObject& operator=(const MyObject&);
    friend std::ostream& operator<<(std::ostream&, MyObject&);
    friend std::ofstream& operator<<(std::ofstream&, MyObject&);

  protected:

  private:
    int m_data1;
    int m_data2;
};

#endif // MYOBJECT_H
