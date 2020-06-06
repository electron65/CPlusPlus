#include <iostream>
#include <string>

class constructorClass {
public: //access identifier
	int number;
	char character;
	std::string String;
	constructorClass(int x, char y, std::string z); //constructor
};

//constructor impelement outside of class. You can also 
constructorClass::constructorClass(int x, char y, std::string z) {
	number = x;
	character = y;
	String = z;
}

int main() {
	// creating an object of simpleClass. This calls constructor
	constructorClass a1(98, 'C', "Hello, world!");  // calling constructor with different values
	constructorClass a2(97, 'B', "Bye, world!");  // calling constructor with different values
	
	std::cout << "a1 results" << std::endl;
	std::cout << "a1.number = " << a1.number << std::endl;
	std::cout << "a1.character = " << a1.character << std::endl;
	std::cout << "a1.String = " << a1.String << std::endl;	
	
	std::cout << "\na2 results" << std::endl;
	std::cout << "a2.number = " << a2.number << std::endl;
	std::cout << "a2.character = " << a2.character << std::endl;
	std::cout << "a2.String = " << a2.String << std::endl;
	return 0;
}
