
#include <iostream>

#include "libC/libC.h"
#include "libD/libD.h"

int main() {
    std::cout << "App2: " << std::endl;
    hello_libC(1, "called from App2");
    hello_libD(1, "called from App2");

    return 0;
}