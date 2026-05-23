#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < n ; i++)
    {

        if (a[i] % 2 ==0)
        {
            odd_count++;
        }
        else
        {
            even_count++;
        }
    }
    int total = odd_count * even_count;
    printf("%d", total);
    return 0;
}