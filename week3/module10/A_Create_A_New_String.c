#include<stdio.h>
#include<string.h>
int main()
{
    char s[9999],t[9999];
    scanf("%s %s",&s,&t);
    int s_len=strlen(s);
    int t_len=strlen(t);
    printf("%d %d\n",s_len,t_len);
    printf("%s %s",s,t);

    return 0;
}