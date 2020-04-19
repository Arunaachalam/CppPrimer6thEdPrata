#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main()
{
	char filename[SIZE];
	std::ifstream inFile;

	std::cout << "Enter name of the data file: ";
	std::cin.getline(filename, SIZE);
	inFile.open(filename);

	if (!inFile.is_open())
	{
		std::cout << "could not open the file " << filename << std::endl;
		std::cout << "Program terminating." << std::endl;
		exit(EXIT_FAILURE);
	}

	double value, sum = 0;
	int count = 0;

	inFile >> value;
	while (inFile.good())
	{
		++count;
		sum += value;
		inFile >> value;
	}

	if (inFile.eof())
		std::cout << "End of file reached.\n";
	else if (inFile.fail())
		std::cout << "Input terminated by data mismatch.\n";
	else
		std::cout << "Input terminated for unknown reason.\n";
	if (count == 0)
		std::cout << "No data processed.\n";
	else
	{
		std::cout << "Items read: " << count << std::endl;
		std::cout << "Sum: " << sum << std::endl;
		std::cout << "Average: " << sum / count << std::endl;
	}
	inFile.close();
    
    return 0;

}
