#include <iostream>
#include <string>

void typeOne(void) {
	std::cout << "No return, No input.\n" << std::endl;
}

void typeTwo(int x) {
	std::cout << "No return, Yes input." <<  std::endl;
	std::cout << "input = " << x << "\n" << std::endl;
}

std::string typeThree(void) {
	std::cout << "Yes return, no input." << std::endl;
	std::string returnValue = "return value1.\n";

	return returnValue;
}

std::string typeFour(int x) {
	std::cout << "Yes return, Yes input." << std::endl;
	std::cout << "input = " << x << std::endl;
	std::string returnValue = "return value2.\n";

	return returnValue;
}

int main() {
	
	typeOne();
	typeTwo(98);
	std::cout << typeThree() << std::endl;
	std::cout << typeFour(96);
	
	return 0;
}
