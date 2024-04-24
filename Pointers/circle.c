#include <graphics.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   int x = 100, y = 100, radius = 50;
   circle(x, y, radius);

   getch();
   closegraph();
   return 0;
}

