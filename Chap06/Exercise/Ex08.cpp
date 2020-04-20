#include <iostream>
#include <cctype>
#include <fstream>
#include <string>

int main()
{
	std::string filename;

	std::cout << "Enter the filename: ";
	std::cin >> filename;
	std::cin.clear();

	std::ifstream inFile;
	inFile.open(filename);


	if (!inFile.is_open())
	{
		std::cout << "could not open the file " << filename << std::endl;
		std::cout << "Program terminating." << std::endl;
		exit(EXIT_FAILURE);
	}

	char ch;
	int alphacount = 0;

	while (!inFile.eof())
	{
		inFile >> ch;
		std::cout << ch;
		if (isalpha(ch))
			alphacount++;
	}

	inFile.close();

	std::cout << "The number of alphabets read are: " << alphacount-1 << std::endl;
    
    return 0;
}
