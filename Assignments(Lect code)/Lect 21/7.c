#include<stdio.h>
void main(){

    int num= 0;
    for(int i = 1; i <= 4; i++){

        for(int j = 1; j<= 4 ; j++){

            if(i > j)
                printf( "\t" );
            else{
                num = num + j;
                printf("%d\t",num);
            }
        }
        printf("\n");
    }
}