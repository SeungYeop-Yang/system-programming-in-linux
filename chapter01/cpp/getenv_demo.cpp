#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

int main() 
{
    char *shell = getenv("SHELL");
    // C++11/14/17
    std::cout << "The current shell is "<< shell << std::endl;
    
    return EXIT_SUCCESS;
}