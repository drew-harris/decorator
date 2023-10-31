#pragma once

#include "decorator.h"
class UI;

class Scroll : public Decorator {
public:
    Scroll(UI* ui) : Decorator(ui) {}
    void draw() override;

} ;
