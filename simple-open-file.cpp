#include <iostream>
#include <fstream> //header
#include <string>

int main() {
	
	std::ofstream file;
	file.open("example.txt"); //open file, you can add opening options here
	file << "Writing this to a file.\n"; //write on file
	file.close(); //close file
	return 0;
}
