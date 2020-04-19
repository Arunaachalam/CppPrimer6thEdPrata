#include <iostream>

int main()
{
	int initial, final;

	std::cout << "Enter the smallest integer first: ";
	std::cin >> initial;
	std::cout << "Enter the largest interger: ";
	std::cin >> final;

	int count = initial, sum = 0;
	while (count <= final)
	{
		sum += count;
		count++;
	}

	std::cout << "The sum of all integers between " << initial << " and " << final << " is " << sum << std::endl;
    
    
    return 0;
}
