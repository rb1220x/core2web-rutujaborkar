#include<stdio.h>
void main(){
	int num;
	do{
		int rev=0;
		printf("Enter the number:");
		scanf("%d",&num);
		int var=num;
	        while(num>0){
			rev=rev*10+(num%10);
			num/=10;
		}
		printf("reverse number = %d\n",rev);
		if(var==rev)
			break;
	}while(1);
}

