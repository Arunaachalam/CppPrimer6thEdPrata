#include <iostream>

int main()
{
	char ch;
	int count = 0;
	std::cout << "Enter characters; enter # to quit:" << std::endl;

	while ((ch = std::cin.get()) != EOF)
	{
		std::cout.put(char(ch));
		++count;
	}
	std::cout << std::endl << count << " characters read" << std::endl;
    
    return 0;
}
