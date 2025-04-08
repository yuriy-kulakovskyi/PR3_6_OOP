#pragma once
#include "D2.h"
#include "B2.h"

class D3 : public D2, private B2 {
  int d3;
public:
  D3(int x, int y, int z, int w, int v);
  ~D3();
  void show() const override;
};