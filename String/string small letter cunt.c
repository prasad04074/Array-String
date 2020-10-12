#include<stdio.h>
#include<conio.h>
int main()
{
    char wsp[20]="";
    int i=0,sla=0;

    printf("\n Enter a city name =");
    gets(wsp);

    while(wsp[i]!='\0')
    {
        if(wsp[i]>='a' && wsp[i]<='z')
        {
            sla++;
        }
        i++;
    }
    printf("\n given value to calculate white spaces =%d",sla);
    getch();
    return 0;
}
