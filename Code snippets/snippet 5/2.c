#include<stdio.h>
void main(){
    int cnt=1;
    do{
        printf("%ld",cnt);
        cnt+=1;

    }while(cnt>=10);

    printf("\nAfter loop cnt=%d",cnt);
    printf("\n");   
}
