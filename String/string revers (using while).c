#include<stdio.h>
#include<conio.h>
int main()
{
    char rev1[20]="";
    char rev2[20]="";
    int i=0,j=0;

    printf("\n Enter a city name =");
    gets(rev1);
    while(rev1[j]!='\0')
    {
        j++;
    }
    j--;
    while(j>=0)
    {
        rev2[i]=rev1[j];

        i++;
        j--;
    }
    printf("\n given value to calculate white spaces =%s",rev2);
    getch();
    return 0;
}
