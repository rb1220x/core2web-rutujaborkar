/*
Q) Write a program in C to make such a pattern like a pyramid with numbers increased by 1. Use nested while loop.

           a
         a b
       a b c 
     a b c d
*/
#include<stdio.h>
void main(){
    char n = 'a';
    for (int i = 1; i <=4; i++)
    {
        for (int j = 1; j<=i; j++,n++)
        {
            printf(" %c ",n);
        }
        //n--;
        printf("\n");
    }
}