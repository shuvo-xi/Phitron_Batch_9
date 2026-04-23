#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int fre[3]={0};
     for(int i=0;i<n;i++)
    {
       if(a[i]==0)
       {
        fre[0]++;
       }
       else if (a[i]==1)
       {
        fre[1]++;
       }
       
    }
    printf("%d\n",fre[0]);
    printf("%d",fre[1]);
    return 0;
}