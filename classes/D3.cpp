#include "D3.h"

D3::D3(int x, int y, int z, int w, int v)
    : D2(y, z, w), B2(v), d3(x) {}
D3::~D3() {}
void D3::show() const {
  D2::show();
  B2::show();
  std::cout << "D3: d3 = " << d3 << std::endl;
}