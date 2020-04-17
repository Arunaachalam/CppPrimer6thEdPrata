#include <iostream> 
#include <string> 
#include <cstring> 



int main() 
{ 
    char charr1[20],  charr2[20] = "jaguar";
    std::string str1, str2 = "panther";
    
    str1 = str2;
    std::strcpy(charr1, charr2);
    
    str1 += " paste";
    std::strcat(charr1, " juice");
    
    int len1 = str1.size();
    int len2 = strlen(charr1);
    
    std::cout << "The string " << str1 << " contains " << len1 << " characters.\n"; 
    
    std::cout << "The string " << charr1 << " contains " << len2 << " characters.\n";
    
    return 0;
}
