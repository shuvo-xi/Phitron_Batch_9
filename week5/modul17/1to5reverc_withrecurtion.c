#include<stdio.h>
void hello(int i)
{
    if (i==6)
    {
        return;
    }
    
    hello(i+1);
    printf("hello");
}
int main()
{
    int i=1;
    hello(i);
    
    return 0;
}