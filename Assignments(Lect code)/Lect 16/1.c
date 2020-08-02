//for and while loop stmt using - continue stmt
//print the addition of whole entered number.
#include<stdio.h>
void main(){
    int num = 0;
    int sum = 0;
    int rem = 0;
    printf("enter number\n");
    scanf("%d",&num);

    while (num!=0) //till number is not get equal to zero ,loop will continue
    {
        /* code */
        rem = num% 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("sum = %d\n",sum); //latest sum will print
}
/*
output
enter number
531
sum = 9
enter number
1234
sum = 10
*/