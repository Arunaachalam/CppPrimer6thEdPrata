/*******************************************************
 Seconds to days, hours, minutes and seconds
*******************************************************/


#include <iostream>

int main()
{
    int day, hour, minute, second;
    long long time;
    
    std::cout << "Enter the number of seconds: ";
    std::cin >> time;
    
    second = time % 60;
    day = time / (60*60*24);
    hour = (time-(day*60*60*24))/(60*60);
    minute = (time-day*60*60*24-hour*60*60)/60;
    
    
    std::cout << time << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, " << second <<" seconds." << std::endl;
    
    return 0;
}
