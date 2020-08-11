#include<stdio.h>
void main(){
	int ch;
	char ans,choice,choice1;
	do{
		printf("Welcome to online shopping\n");
		printf("Enter your prefernces please(f/m)\n");
		printf("In Categories\n1.Western style\n2.Ethnic Wear\n3.Sports Wear\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("Western style\n");
					printf("a.Trousers\nb.shirts\nc.Casual Dresses\nd.Tops &tees\n");
					printf("Enter your choice\n");
					scanf(" %c",&choice);
					switch(choice){
					case 'a':printf("Trousers\n");
						 break;
					case 'b':printf("shirts\n");
						 break;
					case 'c':printf("Casual Dresses\n");
						 break;
					case 'd':printf("Tops &tees\n");
						 break;
					}
					break;
			case 2:
				printf("Ethnic Wear\n");
					printf("a.Lenhengas\nb.Sarees\nc.Kurtas\nd.Ethnic bottoms\n");
					printf("Enter your choice\n");
					scanf(" %c",&choice1);
					switch(choice1){
					case 'a':printf("Lenhengas\n");
						 break;
					case 'b':printf("Sarees\n");
						 break;
					case 'c':printf("Kurtas\n");
						 break;
					case 'd':printf("Ethnic bottoms\n");
						 break;
					}
					break;
            case 3:
				printf("Sports Wear\n");
					printf("a.Active wear\nb.Sneakers&sport shoes\nc.Track pants\nd.Tights\n");
					printf("Enter your choice\n");
					scanf(" %c",&choice1);
					switch(choice1){
					case 'a':printf("Active wear\n");
						 break;
					case 'b':printf("Sneakers&sport shoes\n");
						 break;
					case 'c':printf("Track pants\n");
						 break;
					case 'd':printf("Tights\n");
						 break;
					}
					break;
		}
		printf("want to go back to add more in cart again?(y/n)\n");
		scanf(" %c",&ans);
	}while(ans=='y' || ans=='Y');
}