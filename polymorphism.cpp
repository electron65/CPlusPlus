#include <iostream>
#include <string>
//example of polymorphism
class human { //parent class
public:
	std::string firstHuman = "neanderthal";
	void voice() {
			std::cout << "Hello, I am human.\n" << std::endl;
	}
};

class man : public human { //child class
public:
	void voice() {
	std::cout << "Hello, I am man." << std::endl;
	}
};

class woman : public human { //child class
public:
	void voice() {
		std::cout << "Hello, I am woman." << std::endl;
	}
};

int main() {
	
	man a1;
	woman b1;
	
	a1.voice(); //voice from man
	b1.voice(); //voice from woman
	return 0;
}
