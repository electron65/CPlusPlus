#include <iostream>
#include <string>

class constructorClass {
public: //access identifier
	int number;
	char character;
	std::string String;
	constructorClass(); //constructor
};

//constructor impelement outside of class. You can also 
constructorClass::constructorClass() {
	std::cout << "Default setting here";
}

int main() {

	constructorClass a1; // creating an object of simpleClass. This calls constructor
	return 0;
}
