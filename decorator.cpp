#include "decorator.h"
#include "ui.h"

Decorator::Decorator(UI *ui) : pUI(ui) {}

void Decorator::draw() {
    this->pUI -> draw();
}
