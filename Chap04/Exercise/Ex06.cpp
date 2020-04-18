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
	CandyBar snack[3] = { {"Mocha Munch", 2.3, 350 },{"Kocha Munch",5.5,600},{"Pocha Munch",6,1000} };

	std::cout << "Entry one---" << std::endl;
	std::cout << "Brand Name: " << snack[0].brand << std::endl;
	std::cout << "Weight: " << snack[0].weight << " grams" << std::endl;
	std::cout << "Calories: " << snack[0].calorie << std::endl;

	std::cout << "Entry two---" << std::endl;
	std::cout << "Brand Name: " << snack[1].brand << std::endl;
	std::cout << "Weight: " << snack[1].weight << " grams" << std::endl;
	std::cout << "Calories: " << snack[1].calorie << std::endl;

	std::cout << "Entry three---" << std::endl;
	std::cout << "Brand Name: " << snack[2].brand << std::endl;
	std::cout << "Weight: " << snack[2].weight << " grams" << std::endl;
	std::cout << "Calories: " << snack[2].calorie << std::endl;
    
    return 0;
}
