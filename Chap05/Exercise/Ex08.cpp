#include <iostream>
#include <cstring>

int main()
{
	std::cout << "Enter words (to stop, type the word done): " << std::endl;

	char word[50];
	int count = 0;
	for (int i = 0; std::strcmp(word, "done"); i++)
	{
		std::cin >> word;
		count = i;
	}

	std::cout << "You enterer a total of " << count << " words." << std::endl;
    
    return 0;
}
