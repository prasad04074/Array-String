#include<stdio.h>
#include<conio.h>
int main()
{
    char rev1[20]="";
    char rev2[20]="";
    int i=0,j=0;

    printf("\n Enter a city name =");
    gets(rev1);

    for(i=0;rev1[i]!='\0';i++);
    i--;
    for(;i>=0;i--,j++)
    {
        rev2[i]=rev1[j];
    }
    printf("\n given value to calculate white spaces =%s",rev2);
    getch();
    return 0;
}
