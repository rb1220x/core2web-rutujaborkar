//print diviible by 8 from range 1 to 100; using while loop

#include<stdio.h>
void main(){

    int i=1;
    while(i<= 100){
        if(i % 8 == 0)
        printf("%d\n",i);
        i++;
        
    }
}
/*
output
8
16
24
32
40
48
56
64
72
80
88
96*/