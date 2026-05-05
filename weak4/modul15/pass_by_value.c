#include<stdio.h>
void fun(int x)
{
    x=20;
    printf("fun : %p",&x);
}
int main()
{
    int x=10;
    fun(x);

    printf("main : %p",&x);
    return 0;
}