#include <iostream>
#include <string>


struct pizza
{
	std::string name;
	float diameter, weight;
};

int main()
{
	pizza sample;
	std::cout << "Enter the name of company: ";
	getline(std::cin, sample.name);
	std::cout << "Enter the diameter of Pizza: ";
	std::cin >> sample.diameter;
	std::cout << "Enter the weight of Pizza: ";
	std::cin >> sample.weight;

	std::cout << std::endl << std::endl;
	std::cout << "You have entered: " << std::endl;
	std::cout << "Company Name: " << sample.name << std::endl;
	std::cout << "Pizza Diameter: " << sample.diameter << std::endl;
	std::cout << "Pizza Weight: " << sample.weight << std::endl;
    
    
    return 0;
}
