#include<stdio.h>
#include<conio.h>
int main()
{
    char Abc[20]="";
    int Len=0;

    printf("\n Enter a Abc value =");
    gets(Abc);

   for(Len=0;Abc[Len] != '\0';Len++);

    printf("\n Calculate a lentha =%d",Len);

    getch();
    return 0;
}
