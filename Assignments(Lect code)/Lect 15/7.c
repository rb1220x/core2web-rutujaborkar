//while loop-break stmt in loop
//print num from range 1 to 20 which are divisible by4 & 10 and use break stmt when the condition fails
#include<stdio.h>
void main(){
    int num= 0;
    int i= 0;  //initialization
    
    printf("enter number : \n");
    scanf("%d",&num);

    while(i<= 20){    //condition

        if (num % 4 == 0 && num % 10 == 0) 
            break;   //break the loop and stop 
        else        
            printf("num = %d\n",num);
            i++;     //incre stmt
    }
    printf("out of while loop \n");

}