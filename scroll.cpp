#include "scroll.h"
#include "decorator.h"
#include "ui.h"
#include <iostream>

void Scroll::draw() {
    this->pUI->draw();
    std::cout << "  Scroll Bar" << std::endl;
}
