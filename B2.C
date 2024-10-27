#include <graphics.h>
#include <conio.h>
#include <math.h>

void main() {
int gd = DETECT, gm;
int radius = 30; //The radius
int angle = 0;
int centerX,centerY,eX,eY;

initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

// Second Part - Aarti plate Orbiting the screen center
centerX = getmaxx() / 2;
centerY = getmaxy() / 2;

// Inside the second part of the program - Aarti plate Orbiting the screen center
while (!kbhit()) {
cleardevice();

// Calculate AartiPlate's position
eX = centerX + 100 * cos(angle * 3.14159265 / 180);
eY = centerY + 100 * sin(angle * 3.14159265 / 180);

setfillstyle(SOLID_FILL, RED);
setcolor(RED);
pieslice(eX, eY + 30, 180, 360, radius);
floodfill(eX, eY + 30, RED);

setfillstyle(SOLID_FILL, YELLOW);
setcolor(YELLOW);
ellipse(eX, eY + 15, 0, 360, 5, 15);
floodfill(eX, eY + 15, YELLOW);

setfillstyle(SOLID_FILL, BLUE);
setcolor(BLUE);
rectangle((eX - 50), (eY + radius+30), (eX - 50)+ 100, (eY + radius+30)+ 10);
floodfill((eX - 50) + 100 / 2, (eY + radius+30)+ 10 / 2, BLUE);

// add code to draw additional shapes

delay(50); 
//The speed of rotation

angle++;

if (angle >= 360){
angle = 0;
}
}
}