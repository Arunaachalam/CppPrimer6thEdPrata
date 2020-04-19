#include <iostream>
#include <string>

int main()
{
	std::string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++)
	{
		std::cout << word << std::endl;
		word[0] = ch;
	}

	std::cout << "After loop ends, word is " << word << std::endl;
    
    
    return 0;

}
