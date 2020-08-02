#include<stdio.h>
void main()
{   
    int num;
    for(int i = 1 ; i<=4; i++){

        num= i;
        for (int j = 1; j <= 4; j++)
        {
            printf(" %d ",num);
            num++;
        }
        printf("\n");
    }

}
