#include<stdio.h>
void main(){
    int i =0;
    do{
       i++;
       if(i == 3)
        continue;
       printf("InLoop\n");

    }while(i<3);

    printf("%d\n",i);   
}
