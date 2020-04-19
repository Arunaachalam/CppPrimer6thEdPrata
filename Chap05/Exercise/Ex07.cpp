
#include <iostream>
#include <string>
#include <cstring>
#include <array>

struct Car
{
	std::string name;
	int year;
};

int main()
{
	std::cout << "How many cars do you wish to catalog? ";
	int carno;
	std::cin >> carno;
	//const int carend = carno;
	Car* catalog = new Car [carno];
	char ch;
	for (int i = 0; i < carno; i++)
	{
		std::cout << "Car #" << i + 1 << ":" << std::endl;
		std::cout << "Please enter the make: ";
		std::cin.ignore();
		getline(std::cin, catalog[i].name);

		std::cout << "Please enter the year made: ";
		std::cin >> catalog[i].year;
		//cin.get(ch);
	}

	std::cout << "Here is your collection: " << std::endl;
	for (int i = 0; i < carno; i++)
		std::cout << catalog[i].year << "\t" << catalog[i].name << std::endl;
    
    
    return 0;
}
