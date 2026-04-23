#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }int cot0=0,cot1=0;
     for(int i=0;i<n;i++)
    {
       if(a[i]==0)
       {
        cot0++;
       }
       else if (a[i]==1)
       {
        cot1++;
       }
       
    }
    printf("%d\n",cot0);
    printf("%d",cot1);
    return 0;
}