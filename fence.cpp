#include "graphics.h"

void fence(){

   int fence_width = 30;
   int brown = COLOR(139, 69, 19);
   int max_x = getmaxx();
   setcolor(BLUE);
   setfillstyle(SOLID_FILL, brown);

    for (int x = 0; x < max_x; x += 35) {
      bar(x, 400, x + fence_width, 750);
   }
   bar(0, 450, max_x, 480);
   bar(0, 540, max_x, 670);
 }