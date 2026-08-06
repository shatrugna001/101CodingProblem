// Print the Multiplication Table of a Given Number:
// Write a program where the user enters a number, and the program prints its multiplication table. For example:
// Input: Enter a number: 5
// Output:
// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 10 = 50

// #include <stdio.h>

// void main()
// {
//     int a;

//     printf("enter a number for its table : ");
//     scanf("%d",&a);

//     for(int i = 1; i<=10 ;i++)
//     {
//         printf("%d X %d = %d\n",a,i,a*i);
//     }

// }

// Write a Program to Make a Simple Calculator Using a Switch Case:
// Write a program that acts as a calculator, taking two numbers and an operator (+, -, *, /) from the user, and 
// performing the operation based on the operator. For example:
// Input: Enter first number: 10, Operator: +, Second number: 20
// Output: 10 + 20 = 30

// #include <stdio.h>

// void main()
// {
//     int a;
//     char op;
//     int b;

//     printf("enter an interger: ");
//     scanf("%d",&a);

//     printf("enter an operator(+,-,*,/): ");
//     scanf(" %c",&op);

//     printf("enter an interger: ");
//     scanf("%d",&b);

//     switch(op){
//         case '+':
//         printf(" the sum is : %d",a+b);
//         break;

//         case '-':
//         printf(" the sub is : %d",a-b);
//         break;

//         case '*':
//         printf(" the multiplication is : %d",a*b);
//         break;

//         case '/':
//         printf(" the division is : %f",a/b);
//         break;
//     }
    

// }



// Print a Number in Reverse Order:
// Write a program where the user enters a number, and the program prints it in reverse order. For example:
// Input: 1234
// Output: 4321

#include <stdio.h>

int main()
{
    int num, reverse = 0 , digit;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num/10;
    }

    printf("Here is the reversed order : %d\n",reverse);

    return 0;
}
