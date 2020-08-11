//for loop stmt using - continue stmt
#include<stdio.h>
void main(){
    for( int i = 0; i <= 10; i++)
    {
        if (i%2 == 0)
        {
            continue;
            printf("unbreakable statemnet\n"); //statement written after continue stmt never print.
        }
        else
        {
            printf("%d\n",i);
            break;
        }   
    }
}
/*
output 
1
*/