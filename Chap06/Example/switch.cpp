#include <iostream>

void showmenu();
void report();
void comfort();

int main()
{
	showmenu();
	int choice;
	std::cin >> choice;

	while (choice != 5)
	{
		switch (choice)
		{
		case 1: std::cout << "\a\n";
			break;
		case 2: report();
			break;
		case 3: std::cout << "The boss was in all day." << std::endl;
			break;
		case 4: comfort();
			break;
		default: std::cout << "That's not a choice." << std::endl;
		}
		showmenu();
		std::cin >> choice;
	}
	std::cout << "Bye!" << std::endl;
    
    return 0;
}

void showmenu()
{
	std::cout << "Please enter 1, 2, 3, 4, or 5:\n"
		"1) alarm\t2) report\n3) alibi\t4) comfort\n5)quit\n";
}
void report()
{
	std::cout << "It's been an excellent week for business.\nSales are up 120%. expenses are down 35%." << std::endl;
}
void comfort()
{
	std::cout << "Your employees think you are the finest CEO\nin the industry. The board of directors think"
		"\nyou are the finest CEO in the industry." << std::endl;
}
