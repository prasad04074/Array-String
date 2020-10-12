#include<stdio.h>
#include<conio.h>
#define cun 7
int main()
{
    int Arr[cun]={};
    int i=0,max=0;

    for(i=0;i<cun;i++)
    {
        printf("\n Enter a Array Element =");
        scanf("%d",&Arr[i]);
    }
    printf("\n");

    for(i=0;i<cun;i++)
    {
        if(Arr[i]>= max)
          {
             max=Arr[i];
          }
    }
    printf("\n Given values of maximum value is %d",max);

    getch();
    return 0;
}
