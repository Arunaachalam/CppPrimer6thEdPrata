#include <iostream>

int main()
{
	std::cout << "The Amazing Accounto will sum and average five numbers for you.\n";
	std::cout << "Please enter five values: \n";
	double number, sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		std::cout << "Value " << i << ": ";
		std::cin >> number;
		sum += number;
	}
	std::cout << "Five exquisite choices indeed! Thex sum to " << sum << std::endl;
	std::cout << "and average to " << sum / 5.0 << ".\n";
	std::cout << "The Amazing Accounto bids you adieu! \n";
    
    
    return 0;
}
