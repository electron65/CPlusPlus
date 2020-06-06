#include <iostream>
#include <string>

class human { //parent class
public:
	std::string firstHuman = "neanderthal";
	void voice() {
			std::cout << "Hello, I am human.\n" << std::endl;
	}
protected:
	int gene;
};

class adam : public human { //child class
public:
	std::string man = "Hello, I am man.\n";

	void setGene(int x) { //getter
		gene = x;
	}
	
	int getGene() { //setter
		return gene;
	}
};

int main() {
	adam a1;

	a1.setGene(1);
	
	std::cout << "a1.getGene() = " << a1.getGene() << std::endl;
	std::cout << "a1.man = " << a1.man << std::endl;
	return 0;
}
