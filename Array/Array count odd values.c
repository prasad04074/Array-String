#include<stdio.h>
#include<conio.h>
#define cun 7
int main()
{
    int Odd[cun]={};
    int i=0,ocunt=0;

    for(i=0;i<cun;i++)
    {
        printf("\n Enter Array Element=%d",Odd[i]);
    }
    printf("\n\n");
    for(i=0;i<cun;i++)
    {
        printf("\n Enter a Array Element =");
        scanf("%d",&Odd[i]);
    }
    printf("\n");
    for(i=0;i<cun;i++)
    {
        if(Odd[i]%2 !=0)
        {
            ocunt++;
        }
    }
    printf("\n Count of odd value in given Array = %d",ocunt);
    getch();
    return 0;
}
