/*9)write a program to print following pattern using nested while loop.
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
void main(){
    int count=1;
    int outer = 1; //row
    while (outer  <=5)
    {   
        int inner = 5; //column
        int i =1;
        while (inner>=outer)
        {
            if (inner ==  )
            {
                printf("%d",count);
            }
            else
            {
                printf("%d",i);
            }
            count++;
            i++;
            inner--;
        }
        printf("\n");
        outer++;
    }
}