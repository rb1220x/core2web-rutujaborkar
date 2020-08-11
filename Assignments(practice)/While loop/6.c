#include<stdio.h>
void main(){
    int n,firstNum,LastNum;

    printf("Enter any integer number:\n");
    scanf("%d",&n);

    firstNum=n;

    while(firstNum>=10){
        firstNum = firstNum/10;
        LastNum=n%10;
    }
    printf("First digit of %d = %d\n",n,firstNum);
    printf("Lastdigit of number = %d",LastNum);
}
/*
5575449
First digit of 5575449 = 5
Lastdigit of number = 9*/