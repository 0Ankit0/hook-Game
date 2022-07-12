#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    outtextxy(300,10,"Colors");
    outtextxy(540,450,"Press e to exit");

    rectangle(100,100,150,150);
    setfillstyle(1,RED);
    floodfill(140,130,WHITE);
    outtextxy(100,160,"Red");

    rectangle(200,100,250,150);
    setfillstyle(1,CYAN);
    floodfill(220,120,WHITE);
    outtextxy(200,160,"Cyan");

    rectangle(300,100,350,150);
    setfillstyle(1,WHITE);
    floodfill(320,120,WHITE);
    outtextxy(300,160,"White");

    rectangle(400,100,450,150);
    setfillstyle(1,BLUE);
    floodfill(420,120,WHITE);
    outtextxy(400,160,"Blue");

    rectangle(500,100,550,150);
    setfillstyle(1,GREEN);
    floodfill(520,120,WHITE);
    outtextxy(500,160,"Green");

    if(getch()=='c'){
        exit(1);
    }
    closegraph();
}
