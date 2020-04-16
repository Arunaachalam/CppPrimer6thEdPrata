#include <iostream>

int main() 
{ 
    int chest = 42;
    
    int waist = 0x42;
    int inseam = 042;
    
    std::cout << "Monsieur cuts a striking figure!\nchest = " << chest << " (42 in decimal)\nwaist = " << waist << " (0x42 in hex)\ninseam = " << inseam << " (042 in octal)\n"; 
    
    return 0;
}
