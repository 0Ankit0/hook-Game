#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int go=0,flag=0,last=0;
void makelogic()
{
    switch (flag)
    {
    case 1:
        for(int i=0; i<=135; i++)
        {
            setcolor(BLUE);
    line(187,150,187,262);
    line(187,262,260,262);
    line(280,262,531,262);
    line(531,262,565,262);
    line(585,262,613,262);

            setcolor(RED);

            line(270,140,270,283);
            line(270,283,515,283);
            line(531,284,613,284);


            setcolor(CYAN);
            line(577,155,577,269);
            line(578,294,578,333);
            line(181,333,578,333);

            setcolor(WHITE);
            line(521,244+i,521,378);
            delay(5);
            cleardevice();
            line(181,378,521,378);





        }
        cleardevice();

       setcolor(BLUE);
    line(187,150,187,262);
    line(187,262,260,262);
    line(280,262,531,262);
    line(531,262,565,262);
    line(585,262,613,262);

         setcolor(RED);

    line(270,140,270,283);
    line(270,283,515,283);
    line(531,284,613,284);

        setcolor(CYAN);
        line(577,155,577,269);
        line(578,294,578,333);
        line(181,333,578,333);

        go++;
        break;
    case 2:

        switch (go)
        {
        case 1:
            for(int i=0; i<=230; i++)
            {


setcolor(RED);
line(270,140,270,283);
line(270,283,515-i,283);
line(531-i,284,613-i,284);
Sleep(5);
cleardevice();

   setcolor(BLUE);
    line(187,150,187,262);
    line(187,262,260,262);
    line(280,262,531,262);
    line(531,262,565,262);
    line(585,262,613,262);

setcolor(CYAN);
line(577,155,577,269);
line(578,294,578,333);
line(181,333,578,333);
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
            for (int i=0; i<=40; i++)
            {

setcolor(CYAN);
line(577,155+i,577,269+i);
line(578,294+i,578,333);
line(181,333,578,333);
Sleep(5);
cleardevice();

            setcolor(BLUE);
    line(187,150,187,262);
    line(187,262,260,262);
    line(280,262,531,262);
    line(531,262,565,262);
    line(585,262,613,262);

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
                for (int i=0; i<=73; i++)
                {
                                setcolor(BLUE);
    line(187,150,187,262);
    line(187,262,260-i,262);
    line(280-i,262,531-i,262);
    line(531-i,262,565-i,262);
    line(585-i,262,613-i,262);
    Sleep(5);
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
        case 'w':
            flag=1;
            break;
        case 'r':
            flag=2;
            break;
        case 'c':
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

    setcolor(BLUE);
    line(187,150,187,262);
    line(187,262,260,262);
    line(280,262,531,262);
    line(531,262,565,262);
    line(585,262,613,262);

    setcolor(RED);

    line(270,140,270,283);
    line(270,283,515,283);
    line(531,284,613,284);



    setcolor(WHITE);
    line(521,244,521,378);
    line(181,378,521,378);

    setcolor(CYAN);
    line(577,155,577,269);
    line(578,294,578,333);
    line(181,333,578,333);

    while (last !=1)
    {
        input();
        makelogic();
    }
    printf("Game over");
    closegraph();
    exit(1);
}

