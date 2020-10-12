#include<stdio.h>
#include<conio.h>
int main()
{
    char tog[20]="";
    int i=0;

    printf("\n Enter a value =");
    gets(tog);

    while(tog[i] !='\0')
    {
        if(tog[i]>='A' && tog[i]<='Z')
        {
            tog[i]=tog[i]+32;
        }
        else if(tog[i]>='a' && tog[i]<='z')
        {
            tog[i]=tog[i]-32;
        }
        i++;
    }
    printf("\n Given value of toogale count =%s",tog);

    getch();
    return 0;
}
