#include<stdio.h>
void main(){
	int num;
	scanf("%d",&num);
	do{
		printf("%d ",num);
		num--;
	}while(num>=0);
	printf("\n");
}
