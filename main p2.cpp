#include<stdio.h>
#include<graphics.h>
#include<conio.h>
//#include "lvl1.cpp"
int lvl1();
int lvl2();
int last=0,flag=0,go=0;
int main()
{
    //it is the main page that will show upon starting

    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    int a;

    //used to align the coordinates to the text
    outtextxy(100,100,"\t \t \t\t\tPLEASE SELECT A LEVEL:");
    outtextxy(100,150,"1" );
    outtextxy(300,150,"2");
    outtextxy(500,430,"Type c for colours");
    outtextxy(500,450,"Press e to exit");
    while (1)
    {


        switch (getch())
        {
        case '1':
        {
            system("cls");
            lvl1();
            break;
        }
        case '2':
        {
            system("cls");
            lvl2();
            break;
        }
        case 'e':
        {
            exit(1);
        }
        }
        flag=0;
        go=0;
        last=0;


    }
    closegraph();
    return 0;
}
void lvl2makelogic()
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
            line(181,333,515,333);
            line(529,333,578,333);

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
    line(181,333,515,333);
    line(529,333,578,333);

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
    line(181,333,515,333);
    line(529,333,578,333);
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
                line(181,333,515,333);
                line(529,333,578,333);
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
            main();
            break;
        default:
            last=1;
            break;
        }
        break;


    }

}
void lvl2input()
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
int lvl2()
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
    line(181,333,515,333);
    line(529,333,578,333);
    while (last !=1)
    {

        lvl2input();
        lvl2makelogic();

    }
    cleardevice();
    int last=0,flag=0,go=0;
    main();
    closegraph();
}


void lvl1makelogic()
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
            main();
            break;

        default:
            last=1;
            break;
        }
        break;
    }



}


void lvl1input()
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
int lvl1()
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
        lvl1input();
        lvl1makelogic();
    }
    cleardevice();
    last=0;
    go=0;
    flag=0;
    main();
    closegraph();
}


