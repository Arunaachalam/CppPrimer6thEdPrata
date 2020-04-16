#include <iostream> 


int main()
{
    const int Lbs_per_stn = 14; 
    int lbs;
    
    std::cout << "Enter your weight in pounds: "; 
    std::cin >> lbs; 
    
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    
    std::cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n"; 
    
    return 0;
}
