// DAY - 07
// Pattern 1: Inverted Right-angled triangle
// * * * * *
// * * * *
// * * *
// * *
// *

// #include <stdio.h>

// void main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 5; j > i; j--)
//         {
//             printf("* ");
//         }
    
//         printf("\n");
//     }
// }
// Pattern 2: traingle
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <stdio.h>

void main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf("  ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
    
        printf("\n");
    }
}


// Pattern 3: Inverted traingle
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *