#include <iostream>
#include <string>

struct details
{
	std::string firstname, lastname;
	char grade;
	int age;

};


int main()
{
	details person;

	std::cout << "What is your first name? ";
	getline(std::cin, person.firstname);
	std::cout << "What is your last name? ";
	getline(std::cin, person.lastname);
	std::cout << "What letter grade do you deserve? ";
	std::cin >> person.grade;
	std::cout << "what is your age? ";
	std::cin >> person.age;

	std::cout << "Name: " << person.lastname << ", " << person.firstname << std::endl;
	std::cout << "Grade: " << char (person.grade + 1) << std::endl;
	std::cout << "Age: " << person.age << std::endl;
    
    
    return 0;

	
}
