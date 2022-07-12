#include<stdio.h>
#include<conio.h>

int swap(int *,int *);
int main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}
int swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("\nthe swapped numbers are a=%d b=%d",*a,*b);
}
