#include<stdio.h>
#include<string.h>
int is_palindrome(char s[])
{
    int fi=0;
    int se=strlen(s)-1;
    while(fi<se)
    {
        if(s[fi]!=s[se])
        {
            return 0;
        }
        fi++;
        se--;
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s",&s);
    int res=is_palindrome(s);
    if(res==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}