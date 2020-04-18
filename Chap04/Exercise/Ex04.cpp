#include <iostream>
#include <string>

int main()
{
	std::string firstname, lastname, fullname;

	std::cout << "Enter your first name: ";
	getline(std::cin, firstname);

	std::cout << "Enter your last name: ";
	getline(std::cin, lastname);

	fullname = lastname;
	fullname += ", ";
	fullname += firstname;

	std::cout << "Here's the information in a single string: " << fullname << std::endl;
    
    return 0;
}
