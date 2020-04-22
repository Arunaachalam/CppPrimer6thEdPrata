#include <iostream>

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void setvalues (box *b1);
void displayval (box b1);


int main()
{
    box make;
    std::cout << "Setting values to box:\n\n";
    setvalues (&make);
    
    std::cout << "Displaying values in box:\n\n";
    displayval(make);
    
    return 0;
}

void setvalues (box* b)
{
    std::cout << "Enter the maker name: ";
    std::cin.getline(b->maker,40);
    std::cout << "Enter the height in m: ";
    std::cin >> b->height;
    std::cout << "Enter the width in m: ";
    std::cin >> b->width;
    std::cout << "Enter the length in m: ";
    std::cin >> b->length;
    
    b->volume = b->height*b->width*b->length;
}

void displayval(box b1)
{
    std::cout << "The values in the BOX structure: \n";
    
    std::cout << "Height = " << b1.height << std::endl;
    std::cout << "Width = " << b1.width << std::endl;
    std::cout << "Length = " << b1.length << std::endl;
    std::cout << "Volume = " << b1.volume << std::endl;
}
