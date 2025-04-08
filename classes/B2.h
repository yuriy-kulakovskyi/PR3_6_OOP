#pragma once
#include <iostream>

class B2 {
protected:
  int b2;
public:
  B2(int x = 0);
  virtual ~B2();
  virtual void show() const;
};