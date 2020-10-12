#include<stdio.h>
#include<conio.h>
#define sda 7
int main()
{
    int Arr[sda]={};
    int i=0,Loc = -1,Ele=0;

    for(i=0;i<sda;i++)
    {
        printf("\n Enter Amount[%d] =",101+i);
        scanf("%d",&Arr[i]);
    }
    printf("\n Enter a Element to be searched =");
    scanf("%d",&Ele);

    for(i=0;i<sda;i++)
    {
        if(Arr[i]==Ele)
        {
            Loc=i+1;
            break;
        }
    }
    if(Loc==-1)
    {
        printf("\n Number not found %d",Loc);
    }
    else
    {
        printf("\n Number 1st Occurrence found in Array At Location =%d.",Loc);
    }
    getch();
    return 0;
}
