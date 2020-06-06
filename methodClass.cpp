#include <iostream>
#include <string>

class methodClass {
public: //access identifier
	int number;
	char character;
	std::string String;
	void method(); //method declaration
};

//method definition outside of class. You can also define it inside the class
void methodClass::method() {
	std::cout << "Bye, world!";
}

int main() {

	methodClass a1; // creating an object of simpleClass

	a1.number = 98;
	a1.character = 'c';
	a1.String = "Hello, world!";

	std::cout << "a1.number = " << a1.number << std::endl;
	std::cout << "a1.character = " << a1.character << std::endl;
	std::cout << "a1.String = " << a1.String << std::endl;
	a1.method(); //call method
	return 0;
}
