//using do while of 1st code
#include<stdio.h>
void main(){
    int i = 10;         //initialization

    do{                             // do body

        printf("in do-while body\n");       //statements ->inside do-body means statement will print before going to the condition 
        i++;                                //decre/incre statement
    }
    while(i<= 20);                  //while-condition
    printf("out of loop\n");
}