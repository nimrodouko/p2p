

#include <iostream>
#include "room.h"
int main()
{
    Room room1;
    room1.generateroomnamba();
    auto result = room1.getroomnamba();
    std::cout << result << std::endl;

    
}

