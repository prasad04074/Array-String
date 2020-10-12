#include<stdio.h>
#include<conio.h>
int main()
{
    char wsp[20]="";
    int i=0,spa=0;

    printf("\n Enter a city name =");
    gets(wsp);

    while(wsp[i]!='\0')
    {
        if(wsp[i]==' ')
        {
            spa++;
        }
        i++;
    }
    printf("\n given value to calculate white spaces =%d",spa);
    getch();
    return 0;
}
