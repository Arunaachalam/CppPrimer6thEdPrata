#include <iostream>
#include<cctype>
#include <string>

int main()
{
	std::cout << "Enter words (q to quit):" << std::endl;

	std::string word;
	int vowel = 0, conso = 0, others = 0;

	while ((std::cin >> word) && word != "q")
	{
		if (isalpha(word[0]))
		{
			switch (word[0])
			{
			case 'a': vowel++; break;
			case 'e': vowel++; break;
			case 'i': vowel++; break;
			case 'o': vowel++; break;
			case 'u': vowel++; break;
			default: conso++; break;
			}
		}
		else
			others++;

	}

	std::cout << vowel << " words beginning with vowels" << std::endl;
	std::cout << conso << " words beginning with consonants" << std::endl;
	std::cout << others << " others" << std::endl;
    
    return 0;

	
}
