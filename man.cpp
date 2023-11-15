#include "graphics.h"

void man(){
   int bodyc = COLOR(22, 127, 201);
   int legsc = COLOR(30, 35, 38);
   int headc = COLOR(68, 59, 49);
   
   setfillstyle(SOLID_FILL, bodyc);
   setcolor(bodyc);
   fillellipse(175, 215, 30, 25);
   fillellipse(225, 315, 30, 25);
   fillellipse(200, 375, 50, 90);
   
   
   setcolor(BLACK);
   setfillstyle(SOLID_FILL, legsc);
   fillellipse(185, 475, 15, 45);
   fillellipse(215, 475, 15, 45);
   
   
   setfillstyle(SOLID_FILL, headc);
   fillellipse(200, 275, 35, 25);
   
 } // 200, 350