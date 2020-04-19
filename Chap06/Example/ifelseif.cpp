#include <iostream>

const int Fave = 27;

int main()
{
	int n;
	std::cout << "Enter a number in the range 1-100 to find my favourite number: ";

	do
	{
		std::cin >> n;
		if (n < Fave)
			std::cout << "Too low -- guess again: ";
		else if (n > Fave)
			std::cout << "Too high -- guess again: ";
		else
			std::cout << Fave << " is right!" << std::endl;
	} while (n != Fave);
    
    
    return 0;
}
