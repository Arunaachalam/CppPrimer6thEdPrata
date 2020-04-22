#include <iostream>

double harmonicmean(int x, int y);

int main()
{
    int x=1,y=1;
    
    double harmean;
    
    std::cout << "Enter two pairs of numbers: ";
    std::cin >> x;
    std::cin >> y;
    
    while (x>0 && y>0)
    {
        std::cout << "The harmonic mean of " << x << " and " << y << " is: " << harmonicmean(x,y) << std::endl;
        
        std::cout << "\nEnter next two numbers: ";
        std::cin >> x >> y;
        
    }
    
    std::cout << "Exit condition reached: One numer is a Zero\n\nThe program is terminated....";
    
    return 0;
    
}


double harmonicmean (int x, int y)
{
    return (2.0*x*y)/(x+y);
}
