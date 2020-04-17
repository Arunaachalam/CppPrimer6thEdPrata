#include <iostream>
#include <cstring> 


int main() 
{ 
    const int Size = 15; 
    char name1[Size];
    char name2[Size] = "C++owboy";  
    
    std::cout << "Howdy! I'm " << name2 << "! What's your name?\n"; 
    std::cin >> name1; 
    
    
    
    std::cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n"; 
    
    std::cout << "in an array of " << sizeof(name1) << " bytes.\n"; 
    
    std::cout << "Your initial is " << name1[0] << ".\n"; 
    
    name2[3] = '\0'; 
    
    std::cout << "Here are the first 3 characters of my name: " << name2 << std::endl; 
    
    return 0;
}
