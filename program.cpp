#include "graphics.h"
#include "picture.hpp"

int main()
{ initwindow(800,600);
   sun(); // солнце
   house(); // дом
   man();
   fence(); // забор
   getch();
   closegraph();
}