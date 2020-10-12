#include<stdio.h>
#include<conio.h>
#define cun 7
int main()
{
    int Arr[cun]={};
    int i=0,Zcunt=0,Ecunt=0,ocunt=0;

    for(i=0;i<cun;i++)
    {
        printf("\n Enter Array Element=%d",Arr[i]);
    }
    printf("\n\n");
    for(i=0;i<cun;i++)
    {
        printf("\n Enter a Array Element =");
        scanf("%d",&Arr[i]);
    }
    printf("\n");
    for(i=0;i<cun;i++)
    {
        if(Arr[i]==0)
        {
            Zcunt++;
        }
        else if((Arr[i]%2==0)&&(Arr[i]!=0))
        {
            Ecunt++;
        }
        else
        {
            ocunt++;
        }
    }
    printf("\n Count of Even value in given Array = %d",Ecunt);
    printf("\n Count of odd value in given Array = %d",ocunt);
    printf("\n Count of Zero value in given Array = %d",Zcunt);
    getch();
    return 0;
}
