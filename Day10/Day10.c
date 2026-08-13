// DAY - 08
// Pattern 7:
// 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5
// Pattern 8
// 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5
// Pattern 9
// 1 2 3 4 5 1 2 3 4 1 2 3 1 2 1
#include <stdio.h>

void pattern1(){
    
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
    }
}

void pattern2(){
    
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
    }
}

void pattern3(){
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 1; j <= 5 - i; j++)
        {
            printf("%d ",j);
        }
    }
}

void main()
{
    pattern3();
}
