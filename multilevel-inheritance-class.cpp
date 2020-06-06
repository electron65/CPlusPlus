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

class abel : public adam { //grand child class
public:
	std::string son = "Hello, I am son.";
};

int main() {
	abel a1;

	a1.voice();
	std::cout << "a1.man = " << a1.son << std::endl;
	return 0;
}
