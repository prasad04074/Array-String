#include<stdio.h>
#include<conio.h>
int main()
{
    char vo[20]="";
    int i=0,j=0;

    printf("\n Enter a value =");
    gets(vo);

    while(vo[i] !='\0')
    {
       if(vo[i]=='A'||vo[i]=='E'||vo[i]=='I'||vo[i]=='O'||vo[i]=='U'||vo[i]=='a'||vo[i]=='e'||vo[i]=='i'||vo[i]=='o'||vo[i]=='u')
       {
          j++;
       }
        i++;
    }
    printf("\n Given value of Vovels count =%d",j);

    getch();
    return 0;
}
