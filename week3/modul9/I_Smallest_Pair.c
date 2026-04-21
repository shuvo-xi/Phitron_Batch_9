#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int min = INT_MAX;
        for (int i = 0; i <= n - 2; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (a[i] + a[j] + j - i < min)
                {
                    min = a[i] + a[j] + j - i;
                }
            }
        }
        printf("%d\n", min);
    }

    return 0;
}