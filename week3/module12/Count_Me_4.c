#include<stdio.h>
#include<string.h>
int main()
{
    char s[10005];
    scanf("%s",&s);
    int len=strlen(s);
    int cot[128]={0};
    for(int i=0;i<len;i++)
    {
        int ascii_val=(int)s[i];
        cot[ascii_val]++;
    }
     for(int j=97;j<=122;j++)
    {
        if(cot[j]>0)
        {
            printf("%c - %d\n",(char)j,cot[j]);
        }
        if(cot[j]==0)
        {
            continue;
        }
        
    }
    return 0;
}