#include <iostream>
#include <string>

int overLoad(int x, int y) { //overload THIS original fucntion
	return x * y;
}

//overloaded functions
//functions can be distinguished by different parameters

float overLoad(float x, int y) { //differnt input type
	return x * y;
}

int overLoad(float x, int y, int z) { // different number of parameters
	return x * y * z;
}


int main() {
	std::cout << "Input values are 3,4 => " << overLoad(3, 4) << std::endl;//first function
	std::cout << "Input values are 3.5f,4 => " << overLoad(3.5f, 4) << std::endl; //second function
	std::cout << "Input values are 3.5f,4,2 => " << overLoad(3.5f, 4, 2) << std::endl; //third function

	return 0;
}
