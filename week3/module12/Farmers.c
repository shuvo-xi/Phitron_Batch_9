#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     int m;
     int m2;
      int d;
    scanf("%d %d %d",&m,&m2,&d);
     int total_day=(m*d)/(m+m2);
    int day_less=d-total_day;
    printf("%d\n",day_less);

}
    
    
    return 0;
}