#include <iostream>
const int ArSize = 80;

int main()
{
	char line[ArSize];
	int spaces = 0;

	std::cout << "Enter a line of text:" << std::endl;
	std::cin.get(line, ArSize);
	std::cout << "Complete line:\n" << line << std::endl;
	std::cout << "Line through first period:\n";

	for (int i = 0; line[1] != '\0'; i++)
	{
		std::cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	std::cout << std::endl << spaces << " spaces" << std::endl;
	std::cout << "Done." << std::endl;
    
    return 0;
}
