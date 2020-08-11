/*
Q6)  Write a program to print a HOLLOW square of user input size using nested while loop (Perform dry run before running your program) :
	Example : For n = 5
            * * * * *
			*	    *
			*	    *
			*	    *
            * * * * *
*/
#include<stdio.h>
void main(){
    int rows;
    int cols;
    printf("Enterr the num of rows and columns\n");
    scanf("%d %d",&rows,&cols);

    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= cols; j++)
        {
            if (i == 0 || i == rows || j == 0 || j == cols)
                printf("*");
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }    
}