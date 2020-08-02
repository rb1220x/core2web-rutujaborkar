#include<stdio.h>
void main()
{   
    int number;
    long int factorial = 0 ;
    int count;

    printf("Enter the number to find their factorial \n");
    scanf(" %d ", &number);

    for (int i = 1; i <= count; i++) 
    {
        factorial= factorial* i;
        printf(" %ld ",factorial); 
    }
}