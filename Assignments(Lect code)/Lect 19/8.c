/*Q7) Write a program to print the tables of 1 to n numbers in reverse order using nested    while

Input : 6
Output :6 12 18 24  …
	    5 10 15 20 … 
	    .
	    .
	    2 4 6 8 10 …
*/
#include<stdio.h>
void main(){
    int num;
    for (int i = 6; i >= 1; i--)
    {
        num=i;
        for (int j = 1; j <=15; j++)
        {
            printf("%d\t",(num*j));
        }
        printf("\n");
    }
}