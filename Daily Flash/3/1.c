#include<stdio.h>
void main(){
	int num1,num2,mul=0,i=1;
	printf("Enter Two numbers for multiplication:\n");
	scanf("%d %d",&num1,&num2);
	if(num1==0 || num2==0)
		printf("Multiplication of %d and %d is %d\n",num1,num2,mul);
	else{
		do{
			mul=mul+num1;
			i++;
		}while(i<=num2);
		printf("Multiplication of %d and %d is %d\n",num1,num2,mul);
	}
}

