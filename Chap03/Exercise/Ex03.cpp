/*************************************************
 Convert latitude into double degrees
 ************************************************/



#include <iostream>

const double MIN_TO_DEG = 60;
const double SEC_TO_DEG = 3600;

int main()
{
    int degree, minute, second;
    
    std::cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    std::cout << "First, enter the degrees: ";
    std::cin >> degree;
    std::cout << "Next, enter the minutes of arc: ";
    std::cin >> minute;
    std::cout << "Finally, enter the seconds of arc: ";
    std::cin >> second;
    
    double answer = degree + minute/MIN_TO_DEG + second/SEC_TO_DEG;
    
    std::cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << answer << " degrees" << std::endl;
    
    return 0;
    
    
}
