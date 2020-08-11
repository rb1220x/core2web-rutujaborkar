#include<stdio.h>
void main(){
    int ch;
      char agree = 'y';

    do{ 
      
         printf("welcome\n");
         printf("1.Shopping\n");
         printf("2.PVR\n");
         printf("3.PlayStation\n");
         printf("4.Food Court\n");

         printf("Enter your choice:\n");
         scanf("%d",&ch);

        switch(ch)
         {
        case 1:
             printf("wrogn,LP\n");
             break;
        case 2:
             printf("Joker,POC,DC\n");
             break;
        case 3:
             printf("Football\n");
             break;
        case 4:
             printf("Italian\n");
             break;
         
         default: 
            printf("No choice\n");
             break;
         }
         printf("do you want to continue?(y/n)\n");
         scanf(" %c ",&agree);

    }while(agree == 'y' || agree == 'Y');
}