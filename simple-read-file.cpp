#include <iostream>
#include <fstream> //header
#include <string>

int main() {
	std::string line;
	std::ifstream file("example.txt");
	if (file.is_open())
	{
		while (getline(file, line)) //using getline function, prints until boolean is false
		{
			std::cout << line << '\n';
		}
		file.close();
	}

	else std::cout << "Can not open file.\n";

	return 0;
}
