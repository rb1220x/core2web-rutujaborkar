#include<stdio.h>
void main(){
	int num;
	do{
		int count=0;
		printf("Enter the number:");
		scanf("%d",&num);
		printf("Number = %d\n",num);
		for(int i=1;i<=num;i++){
			if(num%i==0)
				count++;
		}
		if(count==2)
			break;
	}while(1);
}

