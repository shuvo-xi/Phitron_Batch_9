#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int len=strlen(s);
    int let=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            continue;
        }
        else
        {
            let++;
        }
    }
    printf("%d",let);
    return 0;
}