#include <iostream>
#include "Crypt.h" // include the class

int main()
{
    Crypt crypt; // create the object
    crypt.DisplayMessage(); // display the message

    std::cout << "\n";
    std::cout << "1. Enter the Crypt" << std::endl;
    std::cout << "2. Flee" << std::endl;

    std::cin.get(); // pause before closing
    return 0;
}
