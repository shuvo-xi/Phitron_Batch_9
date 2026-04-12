// 

// #include <stdio.h>
// int main()
// {
//     int pass;
//     while (scanf("%d", &pass)) //can use while (scanf("%d", &pass)==eof)
//     {
//         if (pass == 1999)
//         {
//             printf("Correct\n");
//             break;
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }

//     return 0;
// }





// solved by for loop

#include <stdio.h>
int main()
{
    int pass;
   for (;scanf("%d", &pass);) //can use while (scanf("%d", &pass)==eof)
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}