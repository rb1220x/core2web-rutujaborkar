#include<stdio.h>
void main(){
    
    for (int i = 1; i <= 5; i++)
    {
        for (int space = 4; space >= i; space--)
        {
        printf(" ");
        }
       int num= 1;
        for (int j = 1; j <= i; j++)
        {   
            num = num * j;
            printf("%d",num);
        } 
        
        printf("\n");        
    }
}