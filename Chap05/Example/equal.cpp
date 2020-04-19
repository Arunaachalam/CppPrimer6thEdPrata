#include <iostream>

int main()
{
	int quizscores[10] = {20, 20, 20 ,20 ,20, 19, 20, 18, 20, 20};
	std::cout << "Doing it right: \n";
	int i;
	for (i = 0; quizscores[i] == 20; i++)
		std::cout << "quiz " << i << " is a 20\n";
	std::cout << "Doing it dangerously wrong:" << std::endl;
	for (i = 0; quizscores[i] = 20; i++)
		std::cout << "quiz " << i << " is a 20" << std::endl;
    
    
    return 0;
}
