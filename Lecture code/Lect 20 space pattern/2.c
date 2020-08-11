#include<stdio.h>
void main(){
   
    for(int i=1; i <= 4; i++){  //rows

        for (int k = 3; k >=i; k--) //space
        {
           printf(" ");
        }
        for (int j = 1; j<=i; j++)  //columns
        {   
            printf("%d",j);
            
        }
         printf("\n");   //new row
    }
}
/*
  1
  12
 123
1234
*/