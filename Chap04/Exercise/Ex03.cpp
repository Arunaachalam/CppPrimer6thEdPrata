#include <iostream>
#include <cstring>

int main()
{
	
	char firstname[30], lastname[30];
	char fullname[60];

	std::cout << "Enter your first name: ";
	std::cin.getline(firstname, 30);

	std::cout << "Enter your last name: ";
	std::cin.getline(lastname, 30);

	std::strcpy(fullname, lastname);
	std::strcat(fullname, ", ");
	std::strcat(fullname, firstname);

	std::cout << "Here's the information in a single string: " << fullname << std::endl;
    
    return 0;
}
