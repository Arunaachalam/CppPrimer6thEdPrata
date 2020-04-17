#include <iostream> 


int main()
{ 
    const int ArSize = 20; 
    char name[ArSize]; 
    char dessert[ArSize];
    
    std::cout << "Enter your name:\n"; 
    std::cin >> name; 
    
    std::cout << "Enter your favorite dessert:\n"; 
    std::cin >> dessert; 
    
    std::cout << "I have some delicious " << dessert << " for you, " << name << std::endl;
    
    return 0;
}
