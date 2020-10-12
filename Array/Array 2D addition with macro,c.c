#include<stdio.h>
#include<conio.h>
#define sda 5
int main()
{
    int Arr_1[sda]={},Arr_2[sda]={},Arr_3[sda]={},i=0;

    for(i=0;i<sda;i++)
    {
        printf("\n Enter Array 1[%d] =",i);
        scanf("%d",&Arr_1[i]);
    }
    printf("\n ===============****===================\n");
    for(i=0;i<sda;i++)
    {
        printf("\n Enter Array 2[%d] =",i);
        scanf("%d",&Arr_2[i]);
    }
    printf("\n ===============****===================\n");
    for(i=0;i<sda;i++)
    {
        Arr_3[i]=Arr_1[i]+Arr_2[i];
    }
    for(i=0;i<sda;i++)
    {
        printf("\n Array 1[i] + Array 2[i]=Array 3[i] => %d + %d =%d",i,i,i,Arr_1[i],Arr_2[i],Arr_3[i]);
    }
    getch();
    return 0;
}
