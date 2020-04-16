/***********************************************
 Convert Temperature from Celcius to Fahrenheit
 ***********************************************/

#include <iostream>

int celciustofah (int);

int main()
{
    int celcius, fahrenheit;
    
    std::cout << "Please enter a Celcius value: ";
    std::cin >> celcius;
    
    fahrenheit = celciustofah(celcius);
    
    std::cout << celcius << " degree Celcius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
    
    return 0;
}

int celciustofah (int sts)
{
    return (1.8*sts+32.0);
}
