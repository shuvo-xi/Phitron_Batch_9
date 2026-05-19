#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int M,A,B,C;
        scanf("%lld %lld %lld %lld",&M,&A,&B,&C);
        long long int mul=A*B*C;
        if(M%mul==0)
        {
            printf("%lld\n",M/mul);
        }
        else
        {
            printf("-1\n");
        }
        //  printf("%lld %lld %lld %lld\n",M,A,B,C);
    }
    return 0;
}