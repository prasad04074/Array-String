#include<stdio.h>
#include<conio.h>
int main()
{
    int num[5]={};

    printf("\n value of 1 Element = %d",num[0]);
    printf("\n value of 2 Element = %d",num[1]);
    printf("\n value of 3 Element = %d",num[2]);
    printf("\n value of 4 Element = %d",num[3]);
    printf("\n value of 5 Element = %d",num[4]);

    getch();

    num[0]=12;
    num[1]=45;
    num[2]=num[0]-num[1];
    num[3]=num[2]+num[1];
    num[4]=23;

    printf("\n value of 1 Element = %d",num[0]);
    printf("\n value of 2 Element = %d",num[1]);
    printf("\n value of 3 Element = %d",num[2]);
    printf("\n value of 4 Element = %d",num[3]);
    printf("\n value of 5 Element = %d",num[4]);

    getch();
    return 0;
}
