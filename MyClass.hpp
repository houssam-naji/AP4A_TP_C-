/∗ ∗
∗ @author Julien Audoux
∗ @file MyClass.hpp
∗ @date 26/09/2020
∗ @ a simple class aiming to use the operatoroverloading
∗/

// Define guards
#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass {
	public:
		MyClass();
		MyClass(int value);
		MyClass(const MyClass& a);
		int getNumber();
		MyClass& operator=(const MyClass& a);
		friend std::ostream& operator<<(std::ostream &flux, MyClass const& a);
		friend std::ostream& operator<<(std::ofstream &flux, MyClass const& a);
		~MyClass();
	private:
		int m_number;
}

#endif // MYCLASS_H
