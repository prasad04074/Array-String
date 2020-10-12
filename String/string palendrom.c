#include<stdio.h>
#include<conio.h>
int main()
{
   char pal[20]="";
   int i=0,j=0;

   printf("\n Enter a value =");
   gets(pal);

   while(pal[j] >'\0')
   {
       j++;
   }
   j--;
   while(j>i)
   {
       if(pal[i]!=pal[j])
       {
           break;
       }
       i++;
       j--;
   }
   if(i<j)
   {
       printf("\n Given value is not palandrom !!");
   }
   else
   {
       printf("\n Given value is palendrom");
   }
   getch();
   return 0;
}
