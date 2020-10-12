#include<stdio.h>
#include<conio.h>
int main()
{
    char ssb[20]="";
    int i=0,j=0;

    printf("\n Enter a value =");
    gets(ssb);

    while(ssb[i] !='\0')
    {
        if(!((ssb[i]>='A' && ssb[i]<='Z')||(ssb[i]>='a' && ssb[i]<='z')||(ssb[i]>='0' && ssb[i]<= '9')))
        {
            j++;
        }
        i++;
    }
    printf("\n Given value of spacial symbol =%d",j);
    getch();
    return 0;
}
