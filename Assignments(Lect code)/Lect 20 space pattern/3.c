#include<stdio.h>
void main(){
      int ch='a';
    for(int i=1; i <= 4; i++){  //rows

        for (int k = 3; k >=i; k--) //space
        {
           printf(" ");
        }
        for (int j = 1; j<=i; j++)  //columns
        {   
            printf(" %c ",ch);
            ch++;
            
        }
         printf("\n");   //new row
    }
}/*
    a
   b  c
  d  e  f
 g  h  i  j
*/