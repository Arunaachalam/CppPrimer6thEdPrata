#include <iostream>

int main()
{
	double Daphneinit = 100, Cleoinit = 100, Dapnevalue = Daphneinit, Cleovalue=Cleoinit;
	int year = 0;
	while (Cleovalue <= Dapnevalue)
	{
		std::cout << "At Year " << year << " Daphne has $" << Dapnevalue << " and Cleo has $" << Cleovalue << std::endl;
		Dapnevalue += (Daphneinit * 0.1);
		Cleovalue += (Cleovalue * 0.05);
		year++;
	}
	
	std::cout << "After " << year-1 << " years Cleo will be profitable than Daphne." << std::endl;
	std::cout << "At Year " << year << " Daphne has $" << Dapnevalue << " and Cleo has $" << Cleovalue << std::endl;
    
    return 0;

}
