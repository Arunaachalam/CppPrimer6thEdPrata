#include <iostream>

int stonetolb (int);

int main()
{
    int stone, pounds;
    
    std::cout << "Enter the weight in stone: ";
    std::cin >> stone;
    
    pounds = stonetolb(stone);
    
    std::cout << stone << " stone = " << pounds << " pounds." << std::endl;
    
    return 0;
}

int stonetolb (int sts)
{
    return 14*sts;
}
