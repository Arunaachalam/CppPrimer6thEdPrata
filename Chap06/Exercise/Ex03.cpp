#include <iostream>

void showmenu();

int main()
{
	showmenu();
	char ch;
	bool choice = false;

	std::cin >> ch;
	std::cin.ignore();
	while (!choice)
	{
		switch (ch)
		{
		case 'c': std::cout << "A carnivore is an animal.\n"; choice = true; break;
		case 'p': std::cout << "A pianist is a human.\n"; choice = true; break;
		case 't': std::cout << "A maple is a tree.\n"; choice = true; break;
		case 'g': std::cout << "A game is a sport.\n"; choice = true; break;
		default:
			std::cout << "Please enter  a c, p, t, or g: ";
			std::cin.get(ch);
			std::cin.ignore();
			break;
		}
	}
}

void showmenu()
{
	std::cout << "Please enter oe of the following choices: " << std::endl;
	std::cout << "c) carnivore\tp) pianist\nt) tree\tg) game" << std::endl;
}
