#include<stdio.h>
void main(){

    int x = 7;
    printf("Goto statement\n");

    goodmorning:            //label
        printf("Good Morning\n");
        printf("Have a Nice Day\n");
        x--;        // 6 5 4...

    if(x > 5)   //7 > 5
        goto goodmorning;
}
/*Goto statement
Good Morning
Have a Nice Day
Good Morning
Have a Nice Day*/