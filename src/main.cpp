
#include <iostream>

#include "libC/libC.h"
#include "libD/libD.h"

int main() {
    std::cout << "App2: " << std::endl;
    hello_libB(indent+1, "called from App2");
    hello_libC(indent+1, "called from App2");

    return 0;
}