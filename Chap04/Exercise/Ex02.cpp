#include <iostream>
#include <string>

int main()
{
	
	std::string name, dessert;

	std::cout << "Enter your name:\n";
	getline(std::cin, name);
	std::cout << "Enter your favourite dessert:\n";
	getline(std::cin,dessert);

	std::cout << "I have some delicious " << dessert <<" for you, " << name << ".\n";
    
    return 0;
}
