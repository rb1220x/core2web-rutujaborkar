#include<stdio.h>
void main(){
    int num;
    char ch = 'y';

    do{
        printf("Enter num:\n");
        scanf("%d",&num);

        int var= num;
        int rem = 0;
        int rev = 0;

            while(num!= 0){
                rem = num % 10;
                rev = rev*10 + rem; //rev*10
                num = num / 10;
        }
        printf("rev of %d is %d \n",var,rev);
        printf("do you want to continue?(y/n)\n");
        scanf(" %c ",&ch);

    }while(ch == 'y' || ch == 'Y');
    printf("out of loop\n");
}