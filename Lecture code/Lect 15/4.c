// for loop--user input 
#include<stdio.h>
void main(){
    int sum= 0 ;
    int startNum = 0;
    int endNum= 0;

    printf("Enter the startNum & endNum:\n");
    scanf("%d %d",&startNum,&endNum);

    for(int i= startNum;i<=endNum;i++){
        sum += i;
    }
    printf("sum= %d\n",sum);
}
/*
Enter the startNum & endNum:
100 1000
sum= 495550*/