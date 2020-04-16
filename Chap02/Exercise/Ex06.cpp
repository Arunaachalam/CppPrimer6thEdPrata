/***********************************************
 Convert Distance from Light years to Astronomical units
 ***********************************************/

#include <iostream>

long int lyeartoarm (float);

int main()
{
    float lyear;
    long int astron;
    
    std::cout << "Enter the number of light years: ";
    std::cin >> lyear;
    
    astron = lyeartoarm(lyear);
    
    std::cout << lyear << " light years = " << astron << " astronomical units." << std::endl;
    
    return 0;
}

long int lyeartoarm (float sts)
{
    return (sts*63240);
}
