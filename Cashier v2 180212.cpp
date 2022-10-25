#include "stdio.h"
int main()
{
	printf("\t             SEAFOOD MENU\n");
	printf("_______________________________________________________\n");
	printf("\t\t\t\t       Dish size\n");
	printf("item\t Seafood dish\t\tSmall\tMedium\tLarge\n");
	printf("_______________________________________________________\n");
	printf("1\t| Buttered Prawn\t20.00\t40.00\t55.00\n");
	printf("2\t| Crispy squid\t\t18.00\t38.00\t53.00\n");
	printf("3\t| Steamed fish\t\t30.00\t50.00\t65.00\n");
	printf("4\t| Sizzling crab\t\t25.00\t45.00\t60.00\n");
	printf("_______________________________________________________\n");


	int menuNumber, menuQuantity;
	char menuSize;
	float mainDishPrice, totalPrice ;
	
	printf("Enter item number 1-4: ");
	scanf("%d", &menuNumber);
	fflush(stdin);
	
	printf("Enter dish size (S/M/L): ");
	scanf("%c", &menuSize);
	fflush(stdin);
	
	printf("Enter dish quantity: ");
	scanf("%d", &menuQuantity);
	fflush(stdin);
	
	if(menuNumber == 1){
		if(menuSize == 'S'){
			mainDishPrice = 20.00;
		}
		else if(menuSize == 'M'){
			mainDishPrice = 40.00;
		}
		else if(menuSize == 'L'){
			mainDishPrice = 55.00;
		}
	}
	else if(menuNumber == 2){
		if(menuSize == 'S'){
			mainDishPrice = 18.00;
		}
		else if(menuSize == 'M'){
			mainDishPrice = 38.00;
		}
		else if(menuSize == 'L'){
			mainDishPrice = 53.00;
		}
	}
	
	else if(menuNumber == 3){
		if(menuSize == 'S'){
			mainDishPrice = 30.00;
		}
		else if(menuSize == 'M'){
			mainDishPrice = 50.00;
		}
		else if(menuSize == 'L'){
			mainDishPrice = 65.00;
		}
	}
	
	else if(menuNumber == 4){
		if(menuSize == 'S'){
			mainDishPrice = 25.00;
		}
		else if(menuSize == 'M'){
			mainDishPrice = 45.00;
		}
		else if(menuSize == 'L'){
			mainDishPrice = 60.00;
		}
	}
	totalPrice = mainDishPrice*menuQuantity;
	printf("\nPrice per dish size : RM %.2f", totalPrice);
}
	

