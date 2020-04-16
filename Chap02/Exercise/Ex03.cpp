/**************************************************
 Function Call to Print
 *************************************************/


#include <iostream>

void firstprint();
void secondprint();


int main ()
{
    firstprint();
    firstprint();
    secondprint();
    secondprint();
    
    return 0;
}

void firstprint()
{
    std::cout << "Three blind mice" << std::endl;
}

void secondprint()
{
    std::cout << "See how they run" << std::endl;
}
