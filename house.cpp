#include "graphics.h"
#include "picture.hpp"

void house() {
   int *triangle_points = new int[] { 280, 200, 450, 30, 620, 200 };
   int roof_color = COLOR(114, 67, 47);
   int house_color = COLOR(120, 120, 120);
   int window_color = COLOR(240, 240, 240);
   
   setfillstyle(SOLID_FILL, house_color);
   setcolor(BLACK);
   bar(300, 200, 600, 450);
   setfillstyle(SOLID_FILL, roof_color);
   fillpoly(3, triangle_points);
   
   setfillstyle(SOLID_FILL, window_color);
   for (int i = 0; i < 3; i++) {
      bar(350 + i * 75, 250, 400 + i * 75, 320);
   }
}