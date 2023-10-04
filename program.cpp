#include "graphics.h"
#include "picture.hpp"
#include<iostream>

int main()
{ initwindow(800,600);
   sun(); // ������
   house(); // дом
   fence(); // забор
   getch();
   closegraph();
}