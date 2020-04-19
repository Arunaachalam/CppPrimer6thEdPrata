#include <iostream>
const int Max = 5;

int main()
{
	double fish[Max];

	std::cout << "Please enter the weights of your fish." << std::endl;
	std::cout << "You may enter up to " << Max << " fish <q to terminate>." << std::endl;
	std::cout << "fish #1: ";
	int i = 0;
	while (i < Max && std::cin >> fish[i])
	{
		if (++i < Max)
			std::cout << "fish #" << i + 1 << ": ";
	}
	double total = 0.;
	for (int j = 0; j < i; j++)
		total += fish[j];
	if (i == 0)
		std::cout << "No fish\n";
	else
		std::cout << total / i << " = average weight of " << i << " fish" << std::endl;
	std::cout << "Done" << std::endl;
    
    return 0;
}
