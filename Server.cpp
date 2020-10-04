/∗ ∗
∗ @author Julien Audoux
∗ @file Server.cpp
∗ @date 15/09/2020
∗ @ a simple class aiming to use the operator overloading
∗/
#include "Server.hpp"
#include <iostream>
#include <fstream>

//default constructor
Server::Server() {
	this->m_number = 0;
}

//constructor with a parameter
Server::Server(int value) {
	this->m_number = value;
}

//copy constructor
Server::Server(const Server& a){
	this->m_number = a.m_number;
}

//accessor of the attribute m_number
int Server::getNumber() {
	return this->m_number ;
}

//overload of the operator =
Server& Server::Server& operator=(const Server& a) {
	if(this != &a) {
		delete this->m_number;
		this->m_number = a->m_number;
		return (*this);
	}
}

//overload of the operator << in the console
std::ostream& Server::operator<<(std::ostream &flux, Server const& a) {
	flux << a.getNumber();
	return flux;
}

//overload of the operator << in a file
std::ostream& Server::operator<<(std::ofstream &flux, Server const& a) {
	flux << a.getNumber();
	return flux;
}

//destructor method
Server::~Server() {
	delete this->m_number;
}

