#include <iostream>

int main()
{
	std::cout << "Enter your earnings; "
		"program terminates when a negative number or non-numerical input is given:";

	double salary, tax = 0;

	while (std::cin >> salary)
	{
		if (salary <= 5000)
			tax = 0;
		else if (salary <= 15000)
		{
			tax = (salary - 5000) * 0.1;
		}
		else if (salary > 15000 && salary <=35000)
		{
			tax = (salary - 15000) * 0.15 + 10000 * 0.1;
		}
		else if (salary > 35000)
		{
			tax = (salary - 35000) * 0.2 + 10000 * 0.1 + 20000 * 0.15;
		}
		else if (salary < 0)
		{
			std::cout << "Unnatural input given negative salary";
		}
		std::cout << "The total tax amount is: " << tax << std::endl;
		tax = 0;
		std::cout << "Enter a new amount: ";
	}
	std::cout << "Entered an unnatural input. program terminated";
    
    return 0;
}
