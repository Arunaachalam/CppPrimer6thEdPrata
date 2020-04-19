#include <iostream>
#include <array>
#include <string>

int main()
{
	std::array <std::string, 12> month;
	month = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };

	std::array <int, 12> sales;
	int totalsales = 0;

	for (int i = 0; i < month.size() ; i++)
	{
		std::cout << "Enter the sales for the month " << month[i] << ": ";
		std::cin >> sales[i];
		totalsales += sales[i];
	}

	std::cout << "Total sales for the year is " << totalsales << " books." << std::endl;
	std::cout << "Sales based on each month: " << std::endl;
	std::cout << "Month \t \t Sales" << std::endl;

	for (int i = 0; i < month.size(); i++)
	{
		std::cout << month[i] << "\t \t " << sales[i] << std::endl;
	}
	
	
	return 0;
}
