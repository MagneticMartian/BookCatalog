#include <iostream>
#include "ISBN.h"

int main(int argc, char* argv[])
{
    std::string isbn = argv[1];
    if(isvalid(isbn))
        std::cout << "ISBN" << '\n';
    else
        std::cout << "notISBN" << '\n';
}
