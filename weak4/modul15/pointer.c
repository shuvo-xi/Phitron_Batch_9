#include<stdio.h>
int main()
{
    int x=10;
    printf("%d",x);
    printf("%p",&x);
    int *ptr;
    ptr=&x; //prt=20 dedeference
    printf("%d",&ptr);
    return 0;
}