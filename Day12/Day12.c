#include <stdio.h>
// Pattern 1
// A
// B B
// C C C
// D D D D
// E E E E E

void pattern1(){

    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j <= i; j++)
        {
            printf("%c",ch);
            

        }
        printf("\n");
        ch++;
    }
}

// Pattern 2
//       A
//     A B A
//   A B C B A
// A B C D C B A

void pattern2(){

    for (int i = 1; i <= 4; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= 4 - i; j++)
        {
            printf("__");
        }

        for (int k = 1; k <= i ; k++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}
// Program to Perform Swapping of Two Numbers:
// Write a program to swap two numbers entered by the user. For example:

// Input: Enter first number: 10, Enter second number: 20
// Output:
//     Before swapping: a = 10, b = 20
//     After swapping: a = 20, b = 10



void main(){
    pattern2();
}