#include<stdio.h>
void main(){

    int x = 5;
    char y = 'A';
    float z = 20.5;

    if(sizeof(x) == 4  || sizeof(z) == 4){
        printf("Variable is integer type\n");
    }else{
        printf("Variable is of float type\n");
    }
    if(sizeof(y)==1) {
        printf("Variable if type character\n");
    }
}
