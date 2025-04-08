#include <iostream>
#include "./classes/D3.h"

int main() {
    B1 b1(10);
    B2 b2(20);
    D1 d1(30, 40);
    D2 d2(50, 60, 70);
    D3 d3(80, 90, 100, 110, 120);

    std::cout << "Size of B1: " << sizeof(B1) << std::endl;
    b1.show();

    std::cout << "\nSize of B2: " << sizeof(B2) << std::endl;
    b2.show();

    std::cout << "\nSize of D1: " << sizeof(D1) << std::endl;
    d1.show();

    std::cout << "\nSize of D2: " << sizeof(D2) << std::endl;
    d2.show();

    std::cout << "\nSize of D3: " << sizeof(D3) << std::endl;
    d3.show();

    return 0;
}