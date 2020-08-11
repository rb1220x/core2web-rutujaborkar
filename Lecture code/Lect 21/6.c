#include<stdio.h>
void main(){
    char ch = 'A';
    
    for(int i= 1; i <= 4; i++){

        for(int j = 1; j < i; j++){
           if( j >= i)
           printf(" %c ",'A'+ i - 1 -j);
           else
           printf(" \t ");
        }
        printf("\n");
    }
    //return 0;
}