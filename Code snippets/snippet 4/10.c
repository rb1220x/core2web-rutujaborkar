#include<stdio.h>
void main(){

    int x = 0;
    while(++x--== 0) {
        printf("%d",x);
    }
}
/* error: lvalue required as increment operand
    5 |     while(++x--== 0) {
      |           ^~
      */