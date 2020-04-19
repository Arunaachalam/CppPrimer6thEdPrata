#include <iostream>

int main()
{
	std::cout << "This program may reformat your hard disk\nand destroy all your data." << std::endl;
	std::cout << "Do you wish to continue? <y/n> ";
	char ch;
	std::cin >> ch;
	if (ch == 'y' || ch == 'Y')
		std::cout << "You were warned!\a\a\n";
	else if (ch == 'n' || ch == 'N')
		std::cout << "A wise choice... bye" << std::endl;
	else
		std::cout << "That wasn't a y or n! Apparantly you can't follow\ninstructions, so "
		"I 'll trash your disk anyway.\a\a\a\n";
    
    
    return 0;
}
