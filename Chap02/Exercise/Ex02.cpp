/***********************************************
 Convert Distance in Furlongs to Yards
 ***********************************************/

#include <iostream>

int furtoyard (int);

int main()
{
    int furlong, yard;
    
    std::cout << "Enter the distance in furlong: ";
    std::cin >> furlong;
    
    yard = furtoyard(furlong);
    
    std::cout << furlong << " Furlong = " << yard << " Yards." << std::endl;
    
    return 0;
}

int furtoyard (int sts)
{
    return 220*sts;
}
