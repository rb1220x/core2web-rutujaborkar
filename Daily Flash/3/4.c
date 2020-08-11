#include<stdio.h>
void main(){
	int ch;
	char ans,choice,choice1;
	do{
		printf("Welcome to the Burger Plazza\n");
		printf("Select meal from the following\n");
		printf("1.veg \n2.Non Veg \n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Veg Blasts\n");
					printf("a.Veggie Tikki Burger \nb.Aloo Tikki Burger \nc.Mushroom Veggie cheese Burger \nd.Peanut Butter Sweet Potato Burger \n");
					printf("Enter your choice\n");
					scanf(" %c",&choice);
					switch(choice){
					case 'a':printf("Veggie Tikki Burger\n");
						 break;
					case 'b':printf("Aloo Tikki Burger\n");
						 break;
					case 'c':printf("Mushroom veggie cheese Burger\n");
						 break;
					case 'd':printf("Peanut Butter Sweet Potato\n");
						 break;
					}
					break;
			case 2:
				printf("Non Veg Blasts\n");
					printf("a.Chicken Tikki Burger \nb.Chicken Aloo Tikki Burger \nc.Mushroom Chicken cheese Burger \nd.Chicken Burger Patty\n");
					printf("Enter your choice\n");
					scanf(" %c",&choice1);
					switch(choice1){
					case 'a':printf("Chicken Tikki Burger\n");
						 break;
					case 'b':printf("Chicken  Aloo Tikki Burger\n");
						 break;
					case 'c':printf("Mushroom Chicken cheese Burger\n");
						 break;
					case 'd':printf("Chicken Burger Patty\n");
						 break;
					}
					break;
		}
		printf("You want to add more order(y/n)\n");
		scanf(" %c",&ans);
	}while(ans=='y' || ans=='Y');
}
