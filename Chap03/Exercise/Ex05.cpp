/***************************************
 Population percentage
****************************************/

#include <iostream>


int main()
{
    long long world, usa;
    
    std::cout << "Enter the world's population: ";
    std::cin >> world;
    std::cout << "Enter the population of the US: ";
    std::cin >> usa;
    
    double percentage = (double(usa)/world)*100;
    
    std::cout << "The population of the US is " << percentage << "% of the world population" << std::endl;
    
    return 0;
}
