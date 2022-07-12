#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int last=0,flag=0,go=0;
void makelogic()
{
    switch (flag)
    {
    case 1:
        for(int i=0; i<=290; i++)
        {
            setcolor(RED);
            line(135,110,135,400-i);
            Sleep(5);
            cleardevice();
            setcolor(GREEN);
            line(33,210,125,210);
            line(157,210,622,210);
            setcolor(BLUE);
            line(26,302,126,302);
            line(156,302,510,302);
            line(530,302,622,302);
            setcolor(WHITE);
            line(520,113,520,187);
            line(520,224,520,400);


        }

        go++;
        break;
    case 2:

        switch (go)
        {
        case 1:
            for(int i=0; i<=90; i++)
            {

                setcolor(GREEN);
                line(33,210,125-i,210);
                line(157-i,210,622-i,210);
                Sleep(5);
                cleardevice();
                setcolor(BLUE);
                line(26,302,126,302);
                line(156,302,510,302);
                line(530,302,622,302);
                setcolor(WHITE);
                line(520,113,520,187);
                line(520,224,520,400);

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
            for (int i=0; i<=75; i++)
            {
                setcolor(WHITE);
                line(520,113,520,187-i);
                line(520,224-i,520,400-i);
                Sleep(5);
                cleardevice();
                setcolor(BLUE);
                line(26,302,126,302);
                line(156,302,510,302);
                line(530,302,622,302);

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
            for (int i=0; i<=90; i++)
            {
                setcolor(BLUE);
                line(26,302,126-i,302);
                line(156-i,302,510-i,302);
                line(530-i,302,622-i,302);
                delay(5);
                cleardevice();
            }
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
        case 'g':
            flag=2;
            break;
        case 'w':
            flag=3;
            break;
        case 'b':
            flag=4;
            break;
        }
    }
}
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    setcolor(RED);
    line(135,110,135,400);
    setcolor(GREEN);
    line(33,210,125,210);
    line(157,210,622,210);
    setcolor(BLUE);
    line(26,302,126,302);
    line(156,302,510,302);
    line(530,302,622,302);
    setcolor(WHITE);
    line(520,113,520,187);
    line(520,224,520,400);

    while (last !=1)
    {
        input();
        makelogic();
    }
    printf("Game over");
    closegraph();
    exit(1);
}
