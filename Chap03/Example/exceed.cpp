#include <iostream> 
#define ZERO 0 
#include <climits> 

int main() 
{ 
    short sam = SHRT_MAX;
    unsigned short sue = sam;
    
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nAdd $1 to each account.\nNow "; 
    
    sam = sam + 1; 
    sue = sue + 1; 
    
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nPoor Sam!" << std::endl; 
    
    sam = ZERO;
    sue = ZERO;
    
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nTake $1 from each account.\nNow "; 
    
    sam = sam - 1; 
    sue = sue - 1; 
    
    std::cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\nLucky Sue!" << std::endl; 
    
    return 0;
}
