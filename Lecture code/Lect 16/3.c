//for loop stmt using - continue stmt
#include<stdio.h>
void main(){
    int i= 0;

    while (i<=10)
    {
        if ( i %2 ==0){
            //i++; //won't print anything
            continue;
        }
        else
            printf("%d\n",i);
            i++;
    }   
}