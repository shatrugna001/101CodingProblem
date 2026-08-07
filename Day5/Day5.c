// // Calculate the Sum of Digits of a Given Number:
// // Write a program that calculates the sum of the digits of a number entered by the user. For example:
// // Input: Enter a number: 1234
// // Output: Sum of digits: 10

// #include <stdio.h>

// int main()
// {
//     int num, sum = 0, digit;

//     printf("enter a number: ");
//     scanf("%d", &num);

//     while(num != 0)
//     {
//         digit = num % 10;
//         sum = sum + digit;
//         num = num / 10;
//     }

//     printf("here is the sum of the numbers: %d", sum);
// }

// // Write a Program to Check Whether a Character is a Vowel or Consonant:
// // Write a program to check whether a character entered by the user is a vowel (a, e, i, o, u) or a consonant. For example:
// // Input: Enter a character: e
// // Output: e is a vowel.

// #include <stdio.h>
// #include <string.h>

// void main()
// {   
//     char string;

//     printf("Enter a character from the alphabets: ");
//     scanf("%c", &string);

//     // if (strcmp("a,e,i,o,u"))
//     // {
//     //     printf("its a vowel");
//     // }

//     // else {
//     //     printf("its a consonant");
//     // }

//     switch(string){
//         case 'a':
//             printf("it is a vowel");
//             break;
        
//          case 'e':
//             printf("it is a vowel");
//             break;
        
//          case 'i':
//             printf("it is a vowel");
//             break;

//          case 'o':
//             printf("it is a vowel");
//             break;

//          case 'u':
//             printf("it is a vowel");
//             break;

//         default:
//             printf("it is a consonant");
//             break;
//     }
    
// }

// // Write a Program to Find the ASCII Value of a Character:
// // Write a program that takes a character as input and displays its ASCII value. For example:
// // Input: Enter a character: A
// // Output: ASCII value of A: 65

// #include <stdio.h>

// void main()
// {
//     char ch;

//     printf("enter a character: ");
//     scanf("%c",&ch);

//     printf("%d",ch);
// }


#include <stdio.h>

void main()
{
    char ch;

    printf("enter");
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("it is a vowel");
    }

    else{
        printf("it is a consonant");
    }
}