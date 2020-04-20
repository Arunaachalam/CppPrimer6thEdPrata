#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>


struct patrons
{
	std::string name;
	double money;
};


int main()
{
    std::cout << "Enter the name of the file: ";
    std::string filename;
    getline(std::cin,filename);
    
     
    std::ifstream inFile;
    inFile.open(filename);
    
    if (!inFile.is_open())
    {
        std::cout << "\n\ncould not open the file " << filename << std::endl;
        std::cout << "Program is terminating" << std::endl;
        exit (EXIT_FAILURE);
    }
    
 
    
    int count;
    inFile >> count;
    inFile.ignore();
    
 
    
    patrons* listing = new patrons[count];
    
    for (int i = 0; i < count; i++)
    {
        getline(inFile, listing[i].name);
        inFile >> listing[i].money;
        inFile.ignore();
    }
        
    inFile.close();
    
    std::cout << "Grand patrons:" << std::endl;
	for (int i = 0; i < count; i++)
	{
		if (listing[i].money > 10000)
			std::cout << listing[i].name << "\t" << listing[i].money << std::endl;
	}

	std::cout << "Patrons:" << std::endl;
	for (int i = 0; i < count; i++)
	{
		if (listing[i].money <= 10000)
			std::cout << listing[i].name << "\t" << listing[i].money << std::endl;
	}
    return 0;
    
}
