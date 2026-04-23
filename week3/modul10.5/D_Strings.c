#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    int length_a = strlen(a);
    int length = strlen(b);
   
     printf("%d %d\n", length_a,length );
    printf("%s%s\n", a, b);
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;

    printf("%s %s",a,b);
    return 0;
}