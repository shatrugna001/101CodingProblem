
#include <stdio.h>

// Pattern 1
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1
void pattern1(){
    for(int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }

        for (int j = 1; j <= 10 - (2*i); j++)
        {
            printf("_ ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
// Pattern 2
// A
// A B
// A B C
// A B C D
// A B C D E
void pattern2(){

    for(int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
// Pattern 3
// A B C D E
// A B C D
// A B C
// A B
// A
void pattern3(){

    for(int i = 0; i < 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= 5 - i; j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
void main()
{
    pattern3();
}