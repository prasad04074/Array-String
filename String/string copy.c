#include<stdio.h>
#include<conio.h>
int main()
{
    char str1[20]="";
    char str2[20]="";
    int i=0;

    printf("\n Enter a city name =");
    gets(str1);

    while(str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';

    printf("\n Given value to copy string =%s",str2);
    getch();
    return 0;
}
