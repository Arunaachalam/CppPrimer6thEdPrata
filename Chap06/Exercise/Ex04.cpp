#include <iostream>
#include <array>
#include<string>


void printmenu(void);
const int SIZE = 80;

struct bop
{
	char fullname[SIZE];
	char title[SIZE];
	char bopname[SIZE];
	int preference;
};

int main()
{
	std::cout << "Enter the number of programmers in BOP: ";
	int prog=1;
	std::cin >> prog;
	std::cin.ignore();

	bop * thelist = new bop [prog];
	int i = 0;
	while (i < prog)
	{
		std::cout << "Enter the data for person #" << i + 1 << ": " << std::endl;
		std::cout << "Enter the Name: ";
		std::cin.getline(thelist[i].fullname,SIZE);
		std::cout << "Enter the title: ";
		std::cin.getline(thelist[i].title,SIZE);
		std::cout << "Enter the bopname: ";
		std::cin.getline(thelist[i].bopname,SIZE);
		thelist[i].preference = 3;
		i++;
	}
	system("CLS");

	printmenu();

	char ch;
	bool choice = false;

	while (!choice)
	{
		std::cin >> ch;
		std::cin.ignore();

		switch (ch)
		{
		case 'a': for (i = 0; i < prog;  i++) std::cout << thelist[i].fullname << std::endl; std::cout << "Next choice: "; break;
		case 'b': for (i = 0; i < prog;  i++) std::cout << thelist[i].title << std::endl; std::cout << "Next choice: "; break;
		case 'c': for (i = 0; i < prog;  i++) std::cout << thelist[i].bopname << std::endl; std::cout << "Next choice: "; break;
		case 'd': for (i = 0; i < prog;  i++) std::cout << thelist[i].bopname << std::endl; std::cout << "Next choice: "; break;
		case 'q': choice = true; break;
		default: std::cout << "Enter a valid choice please: " << std::endl; break;
		}
		

	}
	
	
	return 0;

}

void printmenu()
{
	std::cout << "Benevolent Order of Programmers Report: " << std::endl;
	std::cout << "a. display by name\tb. display by title\nc. display by bopname"
		"\td. display by preference\nq. quit" << std::endl;
	std::cout << "Enter your choice:";
}
