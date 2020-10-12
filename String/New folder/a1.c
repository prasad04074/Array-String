#include<stdio.h>
#include<conio.h>
int main()
{
    int num[5]={},num2[5]={},i=0,j=0;

    for(i=0;i<5;i++)
    {
        printf("\n Enter a value =");
        scanf("%d",&num[i]);
    }
    for(i=0;i<=4;i++)
    {
        num2[i]=num[i];
        printf("\t %d   %d",num[i],num2[i]);
    }
    for(j=4;j>=0;j--)
    {
         printf("\n given value to revers array=%d",num2[j]);
    }
    getch();
    return 0;
}
