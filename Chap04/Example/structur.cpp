#include <iostream>

struct inflatable
{
    char name[20]; 
    float volume; 
    double price;     
};



int main() 
{ 
    inflatable guest = { "Glorious Gloria",  1.88, 29.99};
    inflatable pal = { "Audacious Arthur", 3.12, 32.99 };  
    
    std::cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!\n";
    
    std::cout << "You can have both for $"; 
    
    std::cout << guest.price + pal.price << "!\n"; 
    
    return 0; 
    
}
