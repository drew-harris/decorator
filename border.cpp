#include "border.h"
#include "decorator.h"
#include "ui.h"
#include <iostream>

Border::Border(UI *in) : Decorator(in) {}

void Border::draw() {
    this->pUI->draw();
    std::cout << "  Border" << std::endl;
}
