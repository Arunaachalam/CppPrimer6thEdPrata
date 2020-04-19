#include <iostream>

int main()
{
	char ch;
	int count = 0;
	std::cout << "Enter characters; enter # to quit:" << std::endl;
	std::cin >> ch;
	while (std::cin.fail() == false)
	{
		std::cout << ch;
		++count;
		std::cin.get(ch);
	}
	std::cout << std::endl << count << " characters read" << std::endl;
    
    return 0;
}
