#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
   

    while (t--)
    {
         int x, y;
        scanf("%d %d", &x, &y);
        int min ,max;
        if(x<y)
        {
            min=x;
            max=y;
        }
        else{
            max=x;
            min=y;
        }
        int sum=0;
        for(int i=min+1;i<max;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
           
            
        }
        printf("%d\n",sum);
    }
    return 0;
}