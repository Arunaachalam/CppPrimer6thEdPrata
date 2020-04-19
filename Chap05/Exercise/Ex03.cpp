#include <iostream>

int main()
{
	double value, sum = 0;

	std::cout << "Enter a number; Enter 0 to exit the program: ";
	std::cin >> value;

	while (value != 0)
	{
		sum += value;
		std::cout << "The cumulative sum till now is: " << sum << std::endl;
		std::cout << "Enter the next value; 0 to terminate: ";
		std::cin >> value;
	}

	std::cout << "You have entered 0. The program is now terminated." << std::endl;
    
    return 0;

}
