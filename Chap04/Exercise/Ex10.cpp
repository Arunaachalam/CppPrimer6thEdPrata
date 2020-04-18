#include <iostream>
#include <array>

int main()
{
	std::array<float, 3> timeline;

	std::cout << "Enter the first run time: ";
	std::cin >> timeline[0];
	std::cout << "Enter the second run time: ";
	std::cin >> timeline[1];
	std::cout << "Enter the third run time: ";
	std::cin >> timeline[2];

	float average = (timeline[0] + timeline[1] + timeline[2]) / 3.0;

	std::cout << "The average time: " << average << std::endl;
    
    return 0;
}
