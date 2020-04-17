/******************************
 Calculate BMI
 *****************************/

#include <iostream>
#include <cmath>

const int FEET_TO_INCH = 12;
const double INCH_TO_M = 0.0254;
const double POUND_TO_KG = 2.2;

int main()
{
    float feet, inch,weight;
    std::cout << "Enter your height in feet and inch (separated by a space): ";
    std::cin >> feet >> inch;
    
    std::cout << "Enter your weight in pounds: ";
    std::cin >> weight;
    
    
    double BMI = (weight/POUND_TO_KG)/pow((feet*FEET_TO_INCH+inch)*INCH_TO_M,2);
    
    std::cout << "Feet " << feet << " , inch " << inch << " , weight " << weight << std::endl;
    std::cout << "Your BMI is " << BMI << ".\n";
    
    return 0;
}
