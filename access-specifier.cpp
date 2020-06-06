#include <iostream>
#include <string>

class AccessClass {
private: // private
	int privateNumber;

public: //public
	int publicNumber;

	AccessClass() { // constructor also public
		publicNumber = 97;
		privateNumber = 98;
	};

	// there is also "protected" used in another source code
};

int main() {
	AccessClass a1;// creating an object of simpleClass. This calls constructor
	a1.publicNumber = 96;
	std::cout << "a1.publicNumber = " << a1.publicNumber << std::endl;
	return 0;
}
