#pragma once
#include "D1.h"

class D2 : private D1 {
  int d2;
public:
  D2(int x, int y, int z);
  ~D2();
  void show() const;
};