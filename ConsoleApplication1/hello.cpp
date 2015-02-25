// Firdt c++ program (Hello, world)
// Eugene, CM3 2015, Tut1 25/02/2015

#include <iostream>
#include <string>

using namespace std;

int main() {
	std::string myName;
	std::cout << "Please enter your name: ";
	std::cin >> myName;
	std::cout << "Hello, "<< myName << std::endl;
	return 0;
}