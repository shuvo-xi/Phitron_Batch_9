#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        scanf("%s",&s[i]);
    }
    int i=0;
    int j=len-1;
    int no_match=0;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            no_match=1;
            break;
        }
        i++;
        j--;
    }
    if(no_match==1)
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
    return 0;
}