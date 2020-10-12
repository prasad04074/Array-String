#include<stdio.h>
#include<conio.h>
#define sda 7
int main()
{
    int Arr[sda]={},Arr2[sda]={},i=0,j=0,dig=0,temp=0;

    printf("\n Enter a value =");
    scanf("%d",&Arr[sda]);

    temp=Arr[sda];
    for(i=0;i<temp;i++)
    {
        dig=temp%10;
        Arr2[sda]=(Arr2[sda]*10)+dig;
        temp=temp/10;
    }
    if(Arr[sda] == Arr2[sda])
    {
        printf("\n Given value is Palendrom!!");
    }
    else
    {
        printf("\n Given value is not palendrom!!");
    }
    getch();
    return 0;
}
