//for loop break stmt in loop
//print even num from range 1 to 10 and use break stmt when the condition fails
#include<stdio.h>
void main(){
    int num= 0;
    
    for(int i= 0; i<= 10; i++){
    
        printf("enter number : \n");
        scanf("%d",&num);

        if (num % 2 == 0) 
            printf("%d\n",num);//even num prints
        else        //if num is odd
            break; //break the loop and stop 
    }
    printf("out of loop \n");

}
