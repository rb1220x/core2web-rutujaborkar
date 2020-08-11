/*
Q3)write a program to print following pattern using nested while loop.
	5 4 3 2 1
	8 6 4 2
	9 6 3
	8 4 
	5
*/
#include<stdio.h>
void main(){
    int num; 
    num= 1;

    for (int i = 1; i <=5; i++)
    {      
        for (int j = 5; j>=i; j--)
        {  
            if(num *j == num && num /j == 0){
                printf("%d\t",num);
                num++;
            }
        }
        printf("\n");
    }

}