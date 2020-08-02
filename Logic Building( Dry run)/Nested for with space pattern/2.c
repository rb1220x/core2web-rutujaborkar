#include<stdio.h>
void main(){
     int num=4;
    for (int i = 1; i <= 4; i++)
    {
        for (int space = 1; space < i; space++)
        {
        printf(" ");
        }
       
        for (int j = 4; j >= i; j--)
        {
            printf("%d",num); 
        } 
         num--;
         printf("\n");        
    }
}