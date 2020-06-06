#include <iostream>
#include <string>

class simpleClass {
public: //access identifier
	int number;
	char character;
	std::string String;
};

int main() {

	simpleClass a1; // creating an object of simpleClass

	a1.number = 98;
	a1.character = 'c';
	a1.String = "Hello, world!";

	std::cout << "a1.number = " << a1.number << std::endl;
	std::cout << "a1.character = " << a1.character << std::endl;
	std::cout << "a1.String = " << a1.String << std::endl;

	return 0;
}
