#pragma once

#include "decorator.h"

class UI;

class Border : public Decorator {
  public:
    Border(UI *ui);
    void draw() override;
};
