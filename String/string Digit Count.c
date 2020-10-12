#include<stdio.h>
#include<conio.h>
int main()
{
    char dig[20]="";
    int i=0,j=0;

    printf("\n Enter a values = ");
    gets(dig);

    while(dig[i] != '\0')
    {
        if((dig[i]>='1' && dig[i]<='9'))
        {
            j++;
        }
        i++;
    }
    printf("\n Given value of digit count is =%d",j);
    getch();
    return 0;
}
