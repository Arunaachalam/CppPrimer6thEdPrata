#include <iostream>
#include <cctype>

int main()
{
	char ch;
	std::cout << "Enter the text below; use @ to terminate the command: " << std::endl;
	std::cin >> ch;
	while (ch != '@')
	{
		if (isdigit(ch))
			std::cin.clear();
		else if (isupper(ch))
			std::cout << char(tolower(ch));
		else if (islower(ch))
			std::cout << char(toupper(ch));
		else
			std::cout << ch;

		std::cin.get(ch);
	}
    std::cout << std::endl;
	std::cout << "You have terminated the program with an @." << std::endl;
	std::cout << "Bye!" << std::endl;
    
    return 0;
}
