/*********************************************************
 Height in inches converted to feet and inches
 *********************************************************/



#include <iostream>
const int INCH_TO_FEET = 12;


int main()
{
    std::cout << "Enter your height in inches: ___\b\b\b";
    
    int height, feet, inch;
    
    std::cin >> height;
    
    feet = height/INCH_TO_FEET;
    inch = height%INCH_TO_FEET;
    
    std::cout << "Your height is " << feet << " feet and " << inch << " inch." << std::endl;
    
    return 0;
}
