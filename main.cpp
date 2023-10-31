#include "border.h"
#include "scroll.h"
#include "window.h"
#include "ui.h"
#include <iostream>

int main() {
    UI *pWindow = new Border(new Scroll (new Window()));
}
