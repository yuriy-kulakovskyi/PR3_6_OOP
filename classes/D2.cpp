#include "D2.h"

D2::D2(int x, int y, int z) : D1(y, z), d2(x) {}
D2::~D2() {}
void D2::show() const {
  D1::show();
  std::cout << "D2: d2 = " << d2 << std::endl;
}