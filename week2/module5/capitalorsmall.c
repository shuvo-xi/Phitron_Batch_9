#include<stdio.h>
int main()
{
    char cha;
    scanf("%c",&cha);
    if(cha>='0'&& cha<='9')
    
{
    printf("IS DIGIT\n");
}
else
{
    printf("ALPHA\n");
    if(cha>='a'&&cha<='z')
    {
        printf("IS SMALL\n");
    }
    else
    {
        printf("IS CAPITAL\n");
    }
}
    return 0;
}