#include<stdio.h>
#include<conio.h>
int main()
{
    char upp[20]="";
    int i=0;

    printf("\n Enter a value =");
    gets(upp);

    while(upp[i] !='\0')
    {
        if(upp[i]>='a' && upp[i]<='z')
        {
           upp[i]=upp[i]-32;
        }
        i++;
    }
    printf("\n Given valuers of upper case =%s",upp);

    getch();
    return 0;
}
