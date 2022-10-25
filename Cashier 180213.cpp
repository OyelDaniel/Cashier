#include<stdio.h>
int main()

{
	int item;
	{
	
	printf(" Welcome to Gemilang Electrical Sdn. Bhd.");
	printf("\n ----------------------------------------\n");
	printf("\n The electrical appliances with the 30 percent discount are as follows\n");
	printf(" \n\tItem\t\t\t\tElectrical\t\t\t\tNormal Price (RM)");
	printf(" \n\tNumber\t\t\t\tAppliances\t\t\t\t     ");
	printf(" \n\t1\t\t\t\tCeiling Fan\t\t\t\t150.00");
	printf(" \n\t2\t\t\t\tTable Fan\t\t\t\t90.00");
	printf(" \n\t3\t\t\t\tToaster\t\t\t\t\t70.00");
	printf(" \n\t4\t\t\t\tRice Cooker\t\t\t\t280.00");
	printf(" \n\t5\t\t\t\tWater Heater\t\t\t\t380.00");
	printf(" \n\t6\t\t\t\tIron\t\t\t\t\t60.00");
	
	printf("\n\n Please choose the item number of the electrical appliance: ",item);
	scanf("%d",&item);
	
	if (item==1)
		printf("\n ** The discounted product's price is : RM 105.00 **");
	else if (item==2)
		printf("\n ** The discounted product's price is : RM 63.00 **");
	else if (item==3)
		printf("\n ** The discounted product's price is : RM 49.00 **");
	else if (item==4)
		printf("\n ** The discounted product's price is : RM 196.00 **");
	else if (item==5)
		printf("\n ** The discounted product's price is : RM 266.00 **");
	else if (item==6)
		printf("\n ** The discounted product's price is : RM 42.00 **");
	else
		printf(" \n\nInvalid entry");
		
	printf("\n\n Thank you");
	}
	return 0;
}

