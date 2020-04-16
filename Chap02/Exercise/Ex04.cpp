/***********************************************
 Convert Age in years to Months
 ***********************************************/

#include <iostream>

int yeartomonth (int);

int main()
{
    int year, month;
    
    std::cout << "Enter your age: ";
    std::cin >> year;
    
    month = yeartomonth(year);
    
    std::cout << "Your age in months is " << month << std::endl;
    
    return 0;
}

int yeartomonth (int sts)
{
    return 12*sts;
}
