/∗ ∗
∗ @author Julien Audoux
∗ @file main.cpp
∗ @date 4/10/2020
∗ @ a simple main aiming to use the Server class
∗/
#include "Server.hpp"
#include <iostream>
#include <fstream>

int main() {
	MyClass a(3);
	MyClass b(&a);
	MyClass c;

	//defining the output file
	std::ofstream m_file("output.txt");

	//output in console
	cout << a << endl;

	if(file) {
		//output in the file
		file << a << endl;
	} else {
		cout << "[-]Error: cannot open file" << endl;
	}


	
}
