#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
        rectangle(100,10,340,20);
    for (int i=0 ; i<=239 ; i=i+4)
    {
        rectangle(100,10,340-i,20);
        setfillstyle(1,RED);
        floodfill(101,11,WHITE);
        delay(1000);
        cleardevice();
    }
    exit(1);
    getch();
    closegraph();
    return 0;
}
