#include <iostream>

const int ArSize = 6;

int main()
{
	float naaq[ArSize];
	std::cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "Of \nyour neighbors. Program terminates when you make\n"
		<< ArSize << " entries or enter a negative value." << std::endl;

	int i = 0;
	float temp;
	std::cout << "First value: ";
	std::cin >> temp;
	while (i<ArSize && temp>=0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			std::cout << "Next Value: ";
			std::cin >> temp;
		}
	}
	if (i == 0)
		std::cout << "No data -- bye" << std::endl;
	else
	{
		std::cout << "Enter your NAAQ: ";
		float you;
		std::cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		std::cout << count << " of your neighbours have greater awareness of\nthe New age than you do."
			<< std::endl;
	}
	
	
	return 0;
}
