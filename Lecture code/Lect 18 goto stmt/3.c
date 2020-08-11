#include<stdio.h>
void main(){

    int x = 10;
    fordemo:            //label
        printf("Just code it\n");

    for (int i = 1; i <= x; i++)
    {
        goto fordemo;
    }
}
/*
it'll print infinite loop for goto stmt "just code it" -> infinite times
NOTE: goto stmt run inside with the loop. and it starts with '1' for each loop*/