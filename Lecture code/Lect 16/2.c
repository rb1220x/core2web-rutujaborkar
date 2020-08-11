//for loop stmt using - continue stmt
#include<stdio.h>
void main(){
    for(int i = 0; i <= 10; i++){
        if(i % 2 == 0)
            continue;
        else
        {
            printf("%d\n",i);
        }
        
    }
}
/*output
1
3
5
7
9*/