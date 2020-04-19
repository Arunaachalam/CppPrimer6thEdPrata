#include <iostream>
#include <ctime>

int main()
{
	std::cout << "Enter the delay time, in seconds: ";
	float secs;
	std::cin >> secs;
	std::clock_t delay = secs * CLOCKS_PER_SEC;

	std::cout << "starting \a\n";
	std::clock_t start = clock();
	while (clock() - start < delay)
		;
	std::cout << "done \a\n";
    
    return 0;
}
