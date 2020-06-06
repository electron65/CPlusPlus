#include <iostream>
#include <string>

int main() {
	std::string STRING = "This is a simple pointer"; // first a variable for pointer
	std::string *ptr = &STRING; // point pointer to variable

	std::cout << "Print content(use *) = " <<*ptr << std::endl; 
	std::cout << "Print address(use &) = " << &ptr << std::endl;
	return 0;
}
