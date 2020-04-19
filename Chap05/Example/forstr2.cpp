#include <iostream>
#include <string>

int main() 
{
	std::cout << "Enter a word: ";
	std::string word;
	std::cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	std::cout << word << "\nDone\n";
    
    
    return 0;

}
