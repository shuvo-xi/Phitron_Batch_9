#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int sp=0;
    int sn=0;
    int v;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&v);
        
        if(v>0)
    {
        sp+=v;
    }
    
     else if(v<0)
    {
        sn+=v;
    }
   
    }
    
 printf("%d ",sp);
 printf("%d",sn);
    return 0;
}