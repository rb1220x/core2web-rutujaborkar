#include<stdio.h>
void main(){
    int n=0, a=16;;
    while(n<=~(~a)){
        n++;
    }
    a =n;
    printf("%d",~a);
    return 0;
}