#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr_1[5]={12,41,23,32,15},Arr_2[5]={5,10,15,20,25},Arr_3[5]={};
    int i=0;

    for(i=0;i<5;i++)
    {
        Arr_3[i]=Arr_1[i]+Arr_2[i];
    }
    for(i=0;i<5;i++)
    {
        printf("\n Arr_1[%d] + Arr_2[%d] =Arr_3[%d] => %d + %d =%d",i,i,i,Arr_1[i],Arr_2[i],Arr_3[i]);
    }
    getch();
    return 0;
}
