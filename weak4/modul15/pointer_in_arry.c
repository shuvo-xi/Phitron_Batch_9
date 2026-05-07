#include<stdio.h>
int main()
{
     int a[5]={10,30,40,50,60};
     printf("arr 0 idx: %p\n",&a[0]);
      printf("arr 0 idx: %p\n",a);
    return 0;
}









// #include<stdio.h>
// int main()
// {
//     int a[5]={10,30,40,50,60};
//     *a=100;
//     for(int i=0;i<5;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }