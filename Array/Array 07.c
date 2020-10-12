#include<stdio.h>
#include<conio.h>
int main()
{
    int temp[5]={20,54,96,85,24};

    printf("\n Print Garbage value of temp[1] = %d",temp[0]);
    printf("\n Print Garbage value of temp[2] = %d",temp[1]);
    printf("\n Print Garbage value of temp[3] = %d",temp[2]);
    printf("\n Print Garbage value of temp[4] = %d",temp[3]);
    printf("\n Print Garbage value of temp[5] = %d",temp[4]);

    getch();

    printf("\n\n");
    temp[0]=45;
    temp[2]=10;
    temp[3]=74;
    temp[4]=95;
    temp[1]=temp[3]+temp[4];

    printf("\n Print Garbage value of temp[1] = %d",temp[0]);
    printf("\n Print Garbage value of temp[2] = %d",temp[1]);
    printf("\n Print Garbage value of temp[3] = %d",temp[2]);
    printf("\n Print Garbage value of temp[4] = %d",temp[3]);
    printf("\n Print Garbage value of temp[5] = %d",temp[4]);
    getch();
    return 0;
}
