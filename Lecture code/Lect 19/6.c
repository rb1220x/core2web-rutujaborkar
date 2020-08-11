/*Q.8) Write a program using nested while loop to Print following Pattern.
0
1	0
1	1	0	
1	1	1	0
*/
#include<stdio.h>
void main(){

    
    for(int i=0; i<=3; i++){
        //int num=0;
        for (int j = 0; j <=i; j++)
        {
             printf("%d",j);
             //num++;
        }
        printf("\n");
    }
}