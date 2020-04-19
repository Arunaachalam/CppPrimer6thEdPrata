#include <iostream>
#include <array>
#include <string>

int main()
{
	std::array <std::string, 12> month;
	month = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };

	std::array <int, 12> sales[3];
	int totalsales = 0;
	for (int j = 0; j < 3; j++)
	{
		std::cout << "Sales for year " << j+1 << std::endl;
		for (int i = 0; i < month.size(); i++)
		{
			std::cout << "Enter the sales for the month " << month[i] << ": ";
			std::cin >> sales[j][i];
			totalsales += sales[j][i];
		}
	}
	std::cout << "Total sales for the year is " << totalsales << " books." << std::endl;
	std::cout << "Sales based on each month: " << std::endl;
	std::cout << "Month \t year1 \t year2 \t year3" << std::endl;

	for (int i = 0; i < month.size(); i++)
	{
		std::cout << month[i] << "\t" << sales[0][i] << "\t" << sales[1][i] << "\t" << sales[2][i]<< std::endl;
	}
	
	return 0;
}
