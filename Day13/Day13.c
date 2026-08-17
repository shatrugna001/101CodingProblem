#include <stdio.h>

// void main(){
//     int a,b,c,d; 
    
//     printf("ENter an first NO: ");
//     scanf("%d",&a);
//     printf("ENter an first NO: ");
//     scanf("%d",&b);
    
//     c = b;
//     d = a;
    
//     printf("%d","%d",c,d);
    
// }

// Factorial of a Number Using a For Loop:

// Write a program to calculate the factorial of a number entered by the user using a for loop. For example:

// Input: Enter a number: 4
// Output: Factorial of 4 is 24.

void factorial(){
    
    int n;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for( int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d",fact);
}

void sumnatural(){
    
    int n;
    int sum = 0;
    
    printf("Enter a range to add: ");
    scanf("%d",&n);
    
    for ( int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Here is the sum of the first n natural numbers : %d",sum);
}

void check_natural(){
    int n;
    
    int count = 0;
    
    scanf("%d",&n);
    
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    
    if (count == 2)
        {
            printf("It is a natural number");
        }
        
        else{
            printf("It is not a natural number");
        }
}

void main(){
    check_natural();
}