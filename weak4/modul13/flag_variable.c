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
    int flag=0;
    for(int j=0;j<n-1;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(a[j+a[k]]==x)
            {
                flag=1;
                printf("yes");
            }
            
        }
    }
    if(flag=0)
    {
        printf("no");
    }
    return 0;
}