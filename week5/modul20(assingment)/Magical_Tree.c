#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int line=(n-1)/2;
    int space=(n-1)/2;
    int star=1;
    for (int i=0;i<line+6;i++)
    {
        for(int j=0;j<space+5;j++)
        {
            printf(" ");
        }
        for(int k=0;k<star;k++)
        {
            printf("*");
        }
        printf("\n");
         space--;
         star+=2;
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf(" ");
        }
        for(int k=0;k<n;k++)
        {
            printf("*");
        }
        printf("\n");
    }

   
    return 0;
}