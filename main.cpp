#include "border.h"
#include "scroll.h"
#include "ui.h"
#include "window.h"
#include <iostream>

int main() {
    UI *pWindow = new Scroll(new Border(new Window()));

    pWindow->draw();
}
