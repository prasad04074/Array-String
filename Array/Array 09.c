#include<stdio.h>
#include<conio.h>
int main()
{
    int num[5]={};
    int i=0;

    for(i=0;i<5;i++)
    {
        printf("\n Enter a %d value =",i+101);
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
       printf("\n Value of %d Element =%d",i+201,num[i]);
    }
    getch();
    return 0;
}
