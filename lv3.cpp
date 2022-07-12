#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int last=0,flag=0,go=0;
void makelogic()
{
    switch (flag)
    {
    case 1:
        for(int i=0; i<=439; i++)
        {
            setcolor(RED);
            line(112,26+i,112,465);
            Sleep(5);
            cleardevice();
            setcolor(BLUE);
            line(14,95,100,95);
            line(126,95,512,95);
            setcolor(WHITE);
            line(14,384,95,384);
            line(128,384,362,384);
            line(394,384,512,384);
            setcolor(GREEN);
            line(254,28,254,80);
            line(254,102,254,364);
            line(254,392,254,466);
            setcolor(CYAN);
            line(382,22,382,88);
            line(382,102,382,466);
            arc(512,95,270,90,20);
            line(382,200,510,200);
            line(510,200,510,115);


        }


        go++;
        break;
    case 2:

        switch (go)
        {
        case 1:
            for(int i=0; i<=386; i++)
            {
                setcolor(BLUE);

                line(14+i,95,100+i,95);
                line(126+i,95,512,95);
                Sleep(5);
                cleardevice();
                setcolor(WHITE);
                line(14,384,95,384);
                line(128,384,362,384);
                line(394,384,512,384);
                setcolor(GREEN);
                line(254,28,254,80);
                line(254,102,254,364);
                line(254,392,254,466);
                setcolor(CYAN);
                line(382,22,382,88);
                line(382,102,382,466);
                arc(512,95,270,90,20);
                line(382,200,510,200);
                line(510,200,510,115);

            }

            go++;
            break;

        default:
            last=1;
            break;
        }
        break;

    case 3:
        switch(go)
        {
        case 2:
            for (int i=0; i<=85; i++)
            {

                setcolor(CYAN);
                line(382,22+i,382,88+i);
                line(382,102+i,382,466+i);
                arc(512,95+i,270,90,20);
                line(382,200,510,200);
                line(510,200,510,115+i);
                delay(5);
                cleardevice();
                setcolor(WHITE);
                line(14,384,95,384);
                line(128,384,362,384);
                line(394,384,512,384);
                setcolor(GREEN);
                line(254,28,254,80);
                line(254,102,254,364);
                line(254,392,254,466);
            }
            go++;
            break;

        default:
            last=1;
            break;
        }
        break;
    case 4:
        switch(go)
        {
        case 3:
            for (int i=0; i<=118; i++)
            {


                setcolor(WHITE);
                line(14+i,384,95+i,384);
                line(128+i,384,362+i,384);
                line(394+i,384,512,384);
                delay(5);
                cleardevice();
                setcolor(GREEN);
                line(254,28,254,80);
                line(254,102,254,364);
                line(254,392,254,466);
            }
            go++;
            break;

        default:
            last=1;
            break;


        }
        break;
    case 5:
        switch(go)
        {
        case 4:
            for (int i=0; i<=74; i++)
            {
                setcolor(GREEN);
                line(254,28+i,254,80+i);
                line(254,102+i,254,364+i);
                line(254,392+i,254,466);
                delay(5);
                cleardevice();
            }
            last=1;
            break;

        default:
            last=1;
            break;

        }
        break;
    }
}

void input()
{

    {
        switch (getch())
        {
        case 'r':
            flag=1;
            break;
        case 'b':
            flag=2;
            break;
        case 'c':
            flag=3;
            break;
        case 'w':
            flag=4;
            break;
        case 'g':
            flag=5;
        }
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(BLUE);
    line(14,95,100,95);
    line(126,95,512,95);
    setcolor(RED);
    line(112,26,112,465);
    setcolor(WHITE);
    line(14,384,95,384);
    line(128,384,362,384);
    line(394,384,512,384);
    setcolor(GREEN);
    line(254,28,254,80);
    line(254,102,254,364);
    line(254,392,254,466);
    setcolor(CYAN);
    line(382,22,382,88);
    line(382,102,382,466);
    arc(512,95,270,90,20);
    line(382,200,510,200);
    line(510,200,510,115);


    while (last !=1)
    {
        input();
        makelogic();
    }
    printf("Game over");
    exit(1);
    closegraph();
}
