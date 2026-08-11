// Pattern problem 1: Right Angle Triangle
// *
// **
// ***
// ****

#include <stdio.h>

void main()
{
    int n = 4;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// pattern problem 2: Right angle triangle with numbers
// 1
// 22
// 333
// 4444

#include <stdio.h>

void main()
{
    int n = 4;
    int num = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d",num);
        }
        num = num+1;
        printf("\n");
    }
}


// 1
// 12
// 123
// 1234

#include <stdio.h>

void main()
{
    int n = 4;
    
    for ( int i = 0; i <= n; i++)
    {
        
        for( int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
}

// ARRAYS

// let's create a program that calculates the average of different ages:

#include <stdio.h>

void main()
{
    int age[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int sum = 0;
    int lenght = sizeof(age)/sizeof(age[0]);
    
    for(int i = 0; i < lenght;i++)
    {
        sum = sum + age[i];
    }
    
    int avg = sum/lenght;
    printf("%d",avg);
}