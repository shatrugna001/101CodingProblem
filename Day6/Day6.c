// Pattern 1: Sqaure
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include <stdio.h>

// int main()
// {   
//     int i;
//     for (i = 0; i <= 5; i++)
//     printf(" * * * * *\n");

//     return 0;
// }

// Pattern 2: Right-angled trinagle
// *
// * *
// * * *
// * * * *
// * * * * *

// #include <stdio.h>

// void main()
// {   

//     int n = 5;

//     for(int i = 0; i <= n; i++)
//     {
//         for(int j = 0; j<=i; j++){
//             printf("*");
//         }
    
//     printf("\n");
//     }
// }


// Pattern 3: Hallow Rectangle
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

//  #include <stdio.h>

//  void main()
// {
//     int i = 0;

//     while (i <= 10)
//     {
//         printf("%d\n",i);
//         i++;
//     }
// }


//  #include <stdio.h>

//  void main()
// {
//     int i = 10;

//     while (i >= 0)
//     {
//         printf("%d\n",i);
//         i--;
//     }
// }

//      *
//     **
//    ***
//   ****
//  *****

// #include <stdio.h>

// void main()
// {

//     for(int i = 0; i < 5;i++)
//     {
//         for (int j = 4; j >= i; j--)
//         {
//             printf(" ");
//         }
//     for(int k = 0; k <= i;k++)
//         {
//             printf("*");
//         }
//     printf("\n");
//     }
// }

#include <stdio.h>

void main()
{
    int i = 0;
    for (int i = 0; i <=5; i++);
    {
        for(int j = 2; j >= i; j--);
        {
            printf(" ");
        }
        
        for(int k = 0; k <= i; k++)
        {
            printf("*");
        }
    }
    printf("\n");
}