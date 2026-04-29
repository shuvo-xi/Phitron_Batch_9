#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10005];
        scanf("%s", &s);
        int i = 0;
        int cap = 0;
        int sma = 0;
        int dig = 0;
        int len = strlen(s);
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                sma++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                dig++;
            }
        }

        printf("%d %d %d\n", cap, sma, dig);
    }

    return 0;
}