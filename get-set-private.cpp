#include <iostream>
#include <string>

class AccessClass {
private: // private
	int privateNumber;

public: //public
	//setter: access private variable
	void setNumber(int x) {
		privateNumber = x;
	}
	//getter: get private variable
	int getNumber() {
		
		return privateNumber;
	}

	// there is also "protected" used in another source code
};

int main() {
	AccessClass a1;// creating an object of simpleClass. This calls constructor
	
	a1.setNumber(98);
	std::cout << "a1.getNumber() = " << a1.getNumber();
	return 0;
}
