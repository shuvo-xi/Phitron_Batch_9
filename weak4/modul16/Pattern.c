#include<stdio.h>
int main()
{
    int  n;
    scanf("%d",&n);
    int star=1;
    int space=n-1;
    
    for(int i=1;i<=n;i++)
    {
        
    for(int j=1;j<=space;j++)
    {
        printf(" ");
    }
    for (int j=1;j<=star;j++)
    {
        if(i%2!=0)
        {
            printf("#");
        }
        else{
            printf("-");
        }
    }
    printf("\n");
    space--;
    star+=2;

    }
    star=2*n-3;
    space=1;
     if(n%2==0)
     {
        for(int i=1;i<=n;i++)
    {
        
    for(int j=1;j<=space;j++)
    {
        printf(" ");
    }
    for (int j=1;j<=star;j++)
    {
        if(i%2!=0)
        {
            printf("#");
        }
        else{
            printf("-");
        }
    }
    printf("\n");
    space++;
    star-=2;

    }
     }
     else{
        for(int i=1;i<=n;i++)
    {
        
    for(int j=1;j<=space;j++)
    {
        printf(" ");
    }
    for (int j=1;j<=star;j++)
    {
        if(i%2!=0)
        {
            printf("-");
        }
        else{
            printf("#");
        }
    }
    printf("\n");
    space++;
    star-=2;

    }
     }
    
    return 0;
}