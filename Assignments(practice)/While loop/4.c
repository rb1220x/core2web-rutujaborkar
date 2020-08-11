#include<stdio.h>
void main(){
    int num,sum=0;

    printf("enter an integer:\n");
    scanf("%d",&num);

    for(int i=1; i<num;i++){
        if(num%i == 0)
        sum+=i;
    }
    if(sum==num){
        printf("%d is a perfect number.\n",num);
    }
    else
        printf("%d is not a perfect number.\n",num);
}
/*
enter an integer:
6
6 is a perfect number.

695
695 is not a perfect number.*/