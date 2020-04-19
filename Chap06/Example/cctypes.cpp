#include <iostream>
#include <cctype>

int main()
{
	std::cout << "Enter text for analysis, and type @ to terminate input." << std::endl;

	char ch;
	int whitespace = 0, digits = 0, chars = 0, punct = 0, others = 0;
	std::cin.get(ch);

		while (ch != '@')
		{
			if (isalpha(ch))
				chars++;
			else if (isspace(ch))
				whitespace++;
			else if (isdigit(ch))
				digits++;
			else if (ispunct(ch))
				punct++;
			else
				others++;
			std::cin.get(ch);
		}

		std::cout << chars << " letters, " << whitespace << " whitespace, " << digits << " digits, "
			<< punct << " puncuations, " << others << " others." << std::endl;
            
            
            return 0;
}
