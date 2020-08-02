#include<stdio.h>
void main(){
    
    for (int i = 1; i <= 5; i++)
    {
        for (int space = 4; space >= i; space--)
        {
        printf(" ");
        }
        
        for (int j = 1; j <= 5; j++)

            if(j <= i)
                printf("%d", j );
         printf("\n");        
    }
   
}