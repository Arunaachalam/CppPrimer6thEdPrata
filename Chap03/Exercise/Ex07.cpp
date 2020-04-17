/******************************************
 Convert EU lpkm to US mpg
 ******************************************/

#include <iostream>


int main()
{
    float lpk;
    double mpg;
    
    std::cout << "Enter your fuel consumption in EU style (l/km): ";
    std::cin >> lpk;
    
    
    mpg = (100.0/lpk) * (0.6214*3.875);
    
    std::cout << "Your fuel consumption in US style is " << mpg << std::endl;
    
    return 0;
}
