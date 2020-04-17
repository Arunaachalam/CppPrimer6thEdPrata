/**************************************************
 Calculate fuel consumption of automobile
**************************************************/


#include <iostream>


int main()
{
    float km, lit, result;
    
    std::cout << "Enter the distance traveled in km: ";
    std::cin >> km;
    std::cout << "Enter the petrol consumption in liters: ";
    std::cin >> lit;
    
    result = (lit/km)*100;
    
    std::cout << "Your Fuel Consumption is " << result << " liters per 100 km" << std::endl;
    
    return 0;
}
