#include <iostream>
#include <cctype>
#include <array>

int main()
{
	std::array <double, 10> donation;

	std::cout << "Enter max 10 entries of donations; program exits on non numeric input: " << std::endl;
	int i = 0;
	double average = 0;
	while (i < 10)
	{
		std::cout << "Enter the donation #" << i + 1 << ": ";
		if(std::cin >> donation[i])
			average += donation[i];
		else
		{
			std::cout << "You entered a non integer: The input section is terminating." << std::endl;
			std::cin.ignore();
			break;
		}
		i++;
	}
	average /= (i);
	std::cout << "The average of the numbers entered is: " << average << std::endl;
	
	std::array<double, 10> abovenum;
	int count = 0, j=0;
	for (count = 0; count < i; count++)
	{
		if (!(average > donation[count]))
		{
			abovenum[j] = donation[count];
			j++;
		}
	}

	std::cout << "There are " << j << " values above the average. They are: ";
	for (int i = 0; i < j ; i++)
		std::cout << abovenum[i] << "\t";
    
    
    return 0;
}
