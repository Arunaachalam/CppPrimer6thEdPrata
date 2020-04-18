#include <iostream>
#include <string>

struct CandyBar
{
	std::string brand;
	float weight;
	int calorie;
};

int main()
{
	CandyBar snack = { "Mocha Munch", 2.3, 350 };

	std::cout << "Brand Name: " << snack.brand << std::endl;
	std::cout << "Weight: " << snack.weight << " grams" << std::endl;
	std::cout << "Calories: " << snack.calorie << std::endl;
    
    return 0;
}
