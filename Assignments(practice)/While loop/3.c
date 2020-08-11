#include<stdio.h>
void main(){
    int a=0,b=1,c,rows;

    printf("enter the limit\n");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){

        printf(" %d ",b);

        for(int j=1;j<=i;j++){
            c= a+b;
            printf(" %d ",c);
            a=b;
            b=c;
        }
        printf("\n");
    }
}