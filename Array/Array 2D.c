#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,j=0,Arr[3][5]={{12,45,58,14,54},{0,14,25,74}};

    for(i=0;i<3;i++)
    {
        printf("\n\n\t Row %d Elements are =>\n",i);
        for(j=0;j<5;j++)
        {
            printf("\n Value of %d%d Element = %d.",i,j,Arr[i][j]);
        }
    }
    getch();
    return 0;
}
