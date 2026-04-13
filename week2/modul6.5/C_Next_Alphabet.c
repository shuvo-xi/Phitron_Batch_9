#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
 
    if(a>='a')
    {
        a++;
    }
    else if(a<'z')
    {
        a--;
    }
    else
    {
        a-=25;
    }
    printf("%c",a);
    return 0;
}