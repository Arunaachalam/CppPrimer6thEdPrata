#include <iostream>
#include <array>

const int ArSize = 10;

int collectinput (std::array <double,ArSize> *scores, int ArSize);
double calculateaverage (std::array<double,ArSize> *scores, int count);
void displayresult(std::array<double,ArSize> *scores, double average, int count);



int main()
{
    std::array <double, ArSize> scores;
    
    int count = collectinput(&scores, ArSize);
    double average = calculateaverage(&scores, count);
    displayresult(&scores, average, count);
    
    return 0;
}

int collectinput (std::array <double,ArSize> *scores, int Arsize)
{
    std::cout << "Golf Scores (to terminate enter a negative value)--- \n\n";
    std::cout << "Enter the golf score 1: ";
    int i = 0;
    while (std::cin >> (*scores)[i] && (*scores)[i] >-1 && i<Arsize-1)
    {
        i++;
        std::cout << "Enter the golf score " << i+1 <<": ";
    }
    
    return i;
}
    
 double calculateaverage (std::array <double,ArSize> *scores, int count)
 {
        double sum=0;
        for (int i = 0; i < count; i++)
            sum+= (*scores)[i];
        
        return sum/count;
 }
 
 void displayresult (std::array <double,ArSize> *scores, double average, int count)
 {
     std::cout << "\n\nNumber of scores entered: " << count << std::endl;
     
     std::cout << "The entries of scores are:\n";
     for(int i=0; i<count;i++)
         std::cout << (*scores)[i] << "\t";
     std::cout << std::endl;
     
     std::cout << "\nThe average score is: " << average << std::endl;
 }
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
    
    
    
    
    
    
    
    
    
    
    
    
