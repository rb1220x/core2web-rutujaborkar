#include<stdio.h>
void main(){

    for(int i = 1; i <= 4; i++){

        for(int spc= 3; spc <=1; spc--){

            printf(" ");
        }

        for(int j= 4; j<=1; j--){

            printf(" * ");
        }
        printf("\n");
    }
}