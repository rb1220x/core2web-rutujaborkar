#include<stdio.h>
void main(){

    int x = 10;
    for (int i = 1; i <= x; i++)
    {
        goto fordemo;
    }
    
    fordemo:            //label
        printf("Just code it\n");
}
//it'll print only once as "Just code it"
//because we cannot write goto statement inside a loop