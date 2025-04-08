#pragma once
#include <iostream>

class B1 {
protected:
  int b1;
public:
  B1(int x = 0);
  virtual ~B1();
  virtual void show() const;
};