#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 9999; i++)
    {
        if (n % i == 0 )
            printf("%d\n", i);
    }

    return 0;
}