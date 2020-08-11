#include<stdio.h>
void main(){
    int i,originalNum,num,lastdigit,sum;
    long factorial;

    printf("enter any number to cheaking wheather it is strong number:\n");
    scanf("%d",&num);

    originalNum= num;
    sum=0;
    //finding sum of factorial digits;
    while(num>0){
        lastdigit = num%10;//last digit of num
        //finding facto of last digit;
        factorial=1;
        for(int i=1; i<=lastdigit; i++){
            factorial= factorial*i;
        }
        //adding facto to sum;
        sum=sum+factorial;
        num= num/10;
    }
    //cheaking condition for entered number;
    if(sum == originalNum){
        printf("%d is a Strong number.\n",originalNum);
    }else{
         printf("%d is not Strong number.\n",originalNum);
    }
}
/*
enter any number to cheaking wheather it is strong number:
124
124 is not Strong number.

145
145 is a Strong number.
*/