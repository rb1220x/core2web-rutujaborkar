#include<stdio.h>
void main(){
    int num =1;
    for(int i = 1; i <= 4;i++)
    {
        for(int k = 1; k <=i;k++ ){
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d",num);
            num = num *2 + i;
        }
        num--;
        printf("\n");
   }
}