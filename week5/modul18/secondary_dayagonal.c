#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);

    int a[r][c];

    // matrix input নেওয়ার loop
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",  &a[i][j]);
        }
    }

    int flag=0;

    // check করছে matrix square কিনা
    if(r==c)
    {
        // square matrix

        // পুরো matrix traverse করার loop
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {

                // diagonal position check
                if(i+j==r-1)
                {
                    // diagonal element
                    // এখানে কিছু check করা লাগেনি
                }

                else
                {
                    // diagonal ছাড়া অন্য position

                    // যদি diagonal ছাড়া অন্য জায়গায়
                    // কোনো non-zero value থাকে
                    // তাহলে এটা diagonal matrix না

                    if (a[i][j]!=0)
                    {
                        flag=1;
                        printf("not diagonal");
                    }

                }
            }
        }

        // যদি কোনো problem না পাওয়া যায়
        if(flag==0)
        {
            printf("this is a secondary diagonal");
        }

    }
    else
    {
        // square matrix না হলে
        // diagonal matrix হবেই না

        printf("not a secondary diagonal");
    }

    return 0;
}