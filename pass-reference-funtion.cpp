#include <iostream>
#include <string>

void changeNumber(int &x, int &y) {
	std::cout << "Current Values \n" << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	//swaping values
	int temp = x;
	x = y;
	y = temp;

	std::cout << "\nChanged Values \n" << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
}

int main() {
	int a1 = 98; //inital values
	int a2 = 99;

	changeNumber(a1, a2);

	return 0;
}
