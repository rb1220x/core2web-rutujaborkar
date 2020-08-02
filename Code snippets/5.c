#include<stdio.h>
void main(){

    int point1,point2,point3,point4,point5;
    int val;

    printf("points for point1,point2,point3,point4,point5\n");
    scanf(" %d %d %d %d %d",&point1,&point2,&point3,&point4,&point5);

    val = point1+point2+point3+point4+point5;
    printf("%f \n",val);
}