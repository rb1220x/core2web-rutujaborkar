/*

  Q2)write a program to print following pattern using nested while loop.
1
1 2
2 3 4
4 5 6 7
7 8 9 10 11

Q4) Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Use nested while loop.

     1 
   2 3 
  4 5 6 
7 8 9 10

10) write a program to print series of prime numbers from entered range. ( Take a start and end number from user )

Perform dry run atleast from 1 to 20 …

Input :-
   Enter starting number : 1
   Enter ending number : 100

Output :-

Series = 2 3 5 7 11 13 17 19 ….. 89 97
*/
#include<stdio.h>
void main(){
    int num=1;

    for (int i = 1; i <=5 ; i++){

         for (int j =1; j<=i; j++, num++)
        {
            printf("%d\t",num);
        }
        num--;
        printf("\n");
    }
}