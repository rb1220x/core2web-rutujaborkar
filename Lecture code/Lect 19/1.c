/*print pattern 
25 25 25 25 25 
16 16 16 16    
9 9 9 
4 4 
1
*/
#include<stdio.h>
void main(){

    for(int i=5; i >=1; i--){
        int num;
        for (int j= 1; j<= i; j++)
        {
            num= i * i;
            printf("%d\t",num);
           //num++;
        }
        printf("\n");
    }
}