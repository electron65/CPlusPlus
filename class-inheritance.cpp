#include <iostream>
#include <string>

class human { //parent class
public:
	std::string firstHuman = "neanderthal";
	void voice() {
			std::cout << "Hello, I am human.\n" << std::endl;
	}
};

class adam : public human { //child class
public:
	std::string man = "Hello, I am man.";
};

int main() {
	adam a1;

	a1.voice();
	std::cout << "a1.man = " << a1.man << std::endl;
	return 0;
}
