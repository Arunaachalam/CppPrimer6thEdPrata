#include <iostream>

int main()
{
	std::cout << "Entering the starting countdown value: ";
	int limit;
	std::cin >> limit;
	int i;
	for (i = limit; i; i--)
		std::cout << "i = " << i << "\n";
	std::cout << "Done now that i = " << i << std::endl;
    
    return 0;
}
