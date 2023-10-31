#pragma once
#include "ui.h"
class Decorator : public UI {
  protected:
    UI *pUI;

  public:
    Decorator(UI *ui);

    void draw() override;
};
