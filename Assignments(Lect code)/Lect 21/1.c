#include<stdio.h>
void main(){

    for (int i = 1; i <= 4; i++)
    {
        for(int k = 1; k < i; k ++){
            printf(" ");
        }

        for(int j = 4; j>= i; j--){
            printf("*");
        }
        printf("\n");
    }
    
}