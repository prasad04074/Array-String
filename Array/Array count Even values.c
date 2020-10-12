#include<stdio.h>
#include<conio.h>
#define cun 7
int main()
{
    int Even[cun]={};
    int i=0,Ecunt=0;

    for(i=0;i<cun;i++)
    {
        printf("\n given values %d = %d",101+i,Even[i]);
    }
    printf("\n\n");
    for(i=0;i<cun;i++)
    {
        printf("\n Enter a %d value =",201+i);
        scanf("%d",&Even[i]);
    }
    for(i=0;i<cun;i++)
    {
        if((Even[i]%2==0)&&(Even[i] !=0))
        {
            Ecunt++;
        }
    }
    printf("\n Count of Even number in Given Array = %d",Ecunt);
    getch();
    return 0;
}
