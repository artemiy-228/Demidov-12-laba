#include "graphics.h"
#include "picture.hpp"

void sun() {
   setfillstyle(SOLID_FILL, RGB(70, 70, 200));
   bar(0, 0, 800, 350);
   setfillstyle(SOLID_FILL, GREEN);
   bar(0, 350, 800, 600);
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL, YELLOW);
   fillellipse(70, 100, 60, 60);
}