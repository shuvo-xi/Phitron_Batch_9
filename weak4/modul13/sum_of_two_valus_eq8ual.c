#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x; 
    scanf("%d",&x);
    for(int j=0;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            printf("%d %d\n",a[j],a[k]);
        }
    }
    return 0;
}