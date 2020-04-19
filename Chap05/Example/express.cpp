#include <iostream>



int main()
{
	int x;
	std::cout << "The expression x 0 100 has the value ";
	std::cout << (x = 100) << std::endl;
	std::cout << "Now x = " << x << std::endl;
	std::cout << "The expression x < 3 has the value " << (x < 3) << std::endl;

	std::cout << "The expression x > 3 has the value " << (x > 3) << std::endl;

	std::cout.setf(std::ios_base::boolalpha);

	std::cout << "The expression x < 3 hasthe value " << (x < 3) << std::endl;

	std::cout << "The expression x > 3 has the value " << (x > 3) << std::endl;
    
    return 0;

}
