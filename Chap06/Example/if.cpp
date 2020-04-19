#include <iostream>

int main()
{
	int spaces = 0, total = 0;
	char ch;
	std::cin.get(ch);

	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		std::cin.get(ch);
	}

	std::cout << spaces << " spaces, " << total << " characters total in sentence" << std::endl;
    
    
    return 0;
}
