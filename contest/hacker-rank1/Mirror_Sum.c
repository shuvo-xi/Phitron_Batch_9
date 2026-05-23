#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
   

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    
    int reve[n];
   for(int i=0;i<n;i++)
   {
    reve[i]=a[i]+b[n-1-i];

   } 

    for(int i=0;i<n;i++)
   {
    printf("%d ",reve[i]);

   } 

    return 0;
}