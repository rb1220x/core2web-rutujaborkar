//print the sum of those number which are divisible by 5 using while
#include<stdio.h>
void main(){

    int i=1;
    int sum = 0;
    while(i<=50){  //semicolon
        if( i % 5 == 0) //conditiom for divisible by 5
            sum += i; //adding numbers into previos num which is divisible by 5
            i++; //number will increment
        
    }printf("sum = %d\n",sum);

}
// sum = 275