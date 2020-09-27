/∗ ∗
∗ @author Julien Audoux
∗ @file MyClass.cpp
∗ @date 15/09/2020
∗ @ a simple class aiming to use the operator overloading
∗/
#include "MyClass.hpp"
#include <iostream>
#include <fstream>

//default constructor
MyClass::MyClass() {
	this->m_number = 0;
}

//constructor with a parameter
MyClass::MyClass(int value) {
	this->m_number = value;
}

//copy constructor
MyClass::MyClass(const MyClass& a){
	this->m_number = a.m_number;
}

//accessor of the attribute m_number
int MyClass::getNumber() {
	return this->m_number ;
}

//overload of the operator =
MyClass& MyClass::MyClass& operator=(const MyClass& a) {
	if(this != &a) {
		delete this->m_number;
		this->m_number = a->m_number;
		return (*this);
	}
}

//overload of the operator << in the console
std::ostream& MyClass::operator<<(std::ostream &flux, MyClass const& a) {
	flux << a.getNumber();
	return flux;
}

//overload of the operator << in a file
std::ostream& MyClass::operator<<(std::ofstream &flux, MyClass const& a) {
	flux << a.getNumber();
	return flux;
}

//destructor method
MyClass::~MyClass() {
	delete this->m_number;
}

int main() {
	MyClass a(3);
	MyClass b(&a);
	MyClass c;
	cout << a;
	std::ofstream file("output.txt");
	file << a;
}
