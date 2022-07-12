#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    //it is the main page that will show upon starting

    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    //used to align the coordinates to the text
    outtextxy(100,100,"\t \t \t\t\tPLEASE SELECT A LEVEL:");
    outtextxy(100,150,"1" );
    outtextxy(300,150,"2");
    outtextxy(100,200,"3");
    outtextxy(500,430,"Type c for colours");
    outtextxy(500,450,"Press e to exit");
    while (1)
    {

        switch (getch())
        {
        case '1':
        {
            system("d:\\hook\\lvl1.exe");

            break;
        }
        case '2':
        {
            system("d:\\hook\\l2.exe");
            break;
        }
        case 'e':
        {
            exit(1);
        }
        case 'c':
        {
            system("d:\\hook\\colors.exe");
            break;
        }
        case '3':
            {

            (void)system("d:\\hook\\lv3.exe");
            break;
            }
        }


    }
    closegraph();
    return 0;
}
