#include <iostream>

const int ArSize = 20;

int main()
{
	char name[ArSize];

	std::cout << "Your first name, please: ";
	std::cin >> name;
	std::cout << "Here is your name, verticalized and AsCIIized:" << std::endl;
	int i = 0;
	while (name[i] != '\0')
	{
		std::cout << name[i] << ": " << int(name[i]) << std::endl;
		i++;
	}
	
	
	return 0;
}
