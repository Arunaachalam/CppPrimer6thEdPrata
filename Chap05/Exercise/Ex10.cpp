#include <iostream>

int main()
{
	std::cout << "Enter number of rows: ";
	int number;
	std::cin >> number;

	for (int i = number; i >=0; i--)
	{
		for (int j = 0; j < number; j++)
		{ 
			while (j < i)
			{
				std::cout << ".";
				break;
			}
			while (j >= i)
			{
				std::cout << "*";
				break;
			}
		}
		std::cout << std::endl;
	}
	
	
	return 0;
}
