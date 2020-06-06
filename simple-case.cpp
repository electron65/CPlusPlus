#include <iostream>
#include <string>

int main() {
	char input = 0; // character type

	std::cout << "Main Menu" << std::endl;
	std::cout << "(select number)" << std::endl;
	std::cout << "1. start" << std::endl;
	std::cout << "2. option" << std::endl;
	std::cout << "3. exit" << std::endl;

	std::cin >> input;

	switch (input) {
	case '1':
		std::cout << "START..." << std::endl;
		break;
	case '2':
		std::cout << "OPTION..." << std::endl;
		break;
	case '3':
		std::cout << "EXIT..." << std::endl;
		break;
		
	default:
		std::cout << "Wrong input!" << std::endl;
		break;
	}
	return 0;
}
