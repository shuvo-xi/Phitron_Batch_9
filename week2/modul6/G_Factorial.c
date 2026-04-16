#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--)
    {
         scanf("%d",&n);
           long long int fac=1;
    for(int i=1;i<=n;i++)
    {
       fac=fac*i;
      
    }
    printf("%lld\n",fac);
    
    }
  
    return 0;
}