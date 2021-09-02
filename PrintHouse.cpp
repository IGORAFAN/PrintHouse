#include <iostream>

int main() 
{
    const char simbolArr[5] = { '/', '\\', ' ', '-', '|' };

    int sizeOfHouse = 0;
    std::cout << "Please, enter the size of house: ";
    std::cin >> sizeOfHouse;
    std::cout << std::endl;

    int timeToPrintLeftRoof  = sizeOfHouse;
    int timeToPrintRightRoof = sizeOfHouse + 1;
    int timeToPrintСeiling   = 0;
    int timeToPrintFloor     = sizeOfHouse;
    int timeToPrintLeftWall  = 2;
    int timeToPrintRightWall = (sizeOfHouse * 2) - 1;

    for (int height = 0; height != sizeOfHouse; ++height) 
    {
        for (int width = 0; width != ((sizeOfHouse * 2) + 2); ++width) 
        {
            if (width == timeToPrintLeftRoof) 
            {
                std::cout << simbolArr[0];
            }
            else if (width == timeToPrintRightRoof)
            {
                std::cout << simbolArr[1];
            }
            else 
            {
                std::cout << simbolArr[2];
            }
        }
        --timeToPrintLeftRoof;
        ++timeToPrintRightRoof;
        std::cout << std::endl;
    }
 
    for (int height = 0; height != sizeOfHouse + 1; ++height)
    {
        for (int width = 0; width != ((sizeOfHouse * 2) + 2); ++width)
        {
            if ((height == timeToPrintСeiling || height == timeToPrintFloor) && width > timeToPrintLeftWall && width < timeToPrintRightWall)
            {
                std::cout << simbolArr[3];
            }
            else if (width == timeToPrintLeftWall || width == timeToPrintRightWall)
            {
                std::cout << simbolArr[4];
            }
            else 
            {
                std::cout << simbolArr[2];
            }
        }
        std::cout << std::endl;
    }

    return 0;
}