#include<stdio.h>
void main(){
    int n=0, a=5, b=10;
    while(n<=(a^b)){
        n++;
    }
    printf("%d",n);
    return 0;
}