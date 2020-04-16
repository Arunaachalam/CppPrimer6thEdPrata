#include <iostream>

void printline (int,int);

int main()
{
    int hour,minute;
    
    std::cout << "Enter the number of hours: ";
    std::cin >> hour;
    std::cout << "Enter the number of minutes: ";
    std::cin >> minute;
    
    printline(hour,minute);
    return 0;
}

void printline(int hour, int minute)
{
    std::cout << "Time: " << hour<<":"<<minute << std::endl;
}
