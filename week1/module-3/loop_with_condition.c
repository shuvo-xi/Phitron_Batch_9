#include <stdio.h>
int main()
{
    for(int i=1;i<=10;i+=1)
    {
       if(i%2==0)
       {
        printf("%d - even number\n",i);
       }
       else
       {
        printf("%d - odd numder\n",i);
       }
    }
   
    return 0;
}