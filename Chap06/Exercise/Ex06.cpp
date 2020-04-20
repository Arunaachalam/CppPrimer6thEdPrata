#include <iostream>
#include <string>

struct patrons
{
	std::string name;
	double money;
};

int main()
{
	std::cout << "Enter the number of patrons to be entered: ";
	int count;
	std::cin >> count;
	std::cin.ignore();

	patrons* listing = new patrons[count];

	for (int i = 0; i < count; i++)
	{
		std::cout << "Enter the patron #" << i + 1 << " name: ";
		getline(std::cin, listing[i].name);
		std::cin.clear();
		std::cout << "Enter the patron contribution $: ";
		std::cin >> listing[i].money;
		std::cin.ignore();
	}

	std::cout << "Grand patrons:" << std::endl;
	for (int i = 0; i < count; i++)
	{
		if (listing[i].money > 10000)
			std::cout << listing[i].name << "\t" << listing[i].money << std::endl;
	}

	std::cout << "Patrons:" << std::endl;
	for (int i = 0; i < count; i++)
	{
		if (listing[i].money <= 10000)
			std::cout << listing[i].name << "\t" << listing[i].money << std::endl;
	}
	
	return 0;
}
