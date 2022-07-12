#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int counter();
int main()
{
    int lines;
    lines=counter();

    int a;
    printf("1. Login Through An Existing Account\n2. Create New account\n");
    scanf("%d",&a);
    switch (a)
    {


    case 1:
{
    system("cls");
    char ename[50];
    char epass[50];

    char name[50];
    char pass[50];

    FILE *fptr;
    printf("Enter username:");
    scanf("%s",ename);
    printf("Enter password:");
    scanf("%s",epass);

    fptr=fopen("login.txt","rb");
    for(int i=0 ; i<lines ; i++)
    {
    fscanf(fptr,"%s %s\n",name,pass);
    if (strcmp(ename,name)==0 && strcmp(epass,pass)==0)
    {
        system("d:\\hook\\main.exe");
        exit(1);
    }
    }
        fclose(fptr);

break;
}
    case 2:
        {

             FILE *fpt;
   fpt = (fopen("login.txt", "ab+"));
   if(fpt == NULL)
   {
       printf("Error!");
   }

else{
         system("cls");
    char name[50];
    char pass[50];
      printf("Enter username:");
      scanf("%s", name);

      printf("Enter password:");
      scanf("%s",pass);

      fprintf(fpt,"%s %s\n", name, pass);
   }

   fclose(fpt);
  break;
        }
    }

    return 0;
}

int counter()
{
    int lines=0;
    char ch;
    FILE *ptr;
     ptr = fopen("login.txt", "r");
    while((ch=getc(ptr))!=EOF)
    {
      if(ch=='\n')
         lines++;
    }
    return lines;
}
/*
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
*/
