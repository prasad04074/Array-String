#include<stdio.h>
#include<conio.h>
int main()
{
    int Arr[5][5][5]={{12,13,14,15,16},{10,20,30,40},{11,22,33,44,55}};
    int i=0,j=0,k=0;

    for(i=0;i<5;i++)
    {
       for(j=0;j<5;j++)
       {
           for(k=0;k<5;k++)
           {
               printf("\n Enter a value of Arr[%d][%d][%d]=",i,j,k);
               scanf("%d",&Arr[i][j][k]);
           }
       }
    }
    for(i=0;i<5;i++)
    {
       for(j=0;j<5;j++)
       {
           for(k=0;k<5;k++)
           {
               printf("\n Given value of Arr[%d][%d][%d]=%d",i,j,k,Arr[i][j][k]);
           }
       }
    }
    getch();
    return 0;
}
