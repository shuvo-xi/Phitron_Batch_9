#include<stdio.h>
#include<limits.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
   int val=strcmp(a,b);
   if(val<0)
   {printf("a is small");}
   else if(val==0)
   {
    printf("equal");
   }
   else if(val>0)
   {
    printf("b is smaller");
   }
    
    return 0;
}