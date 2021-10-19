#include<stdio.h>
main()
{
	int choice;
	printf("Enter any number fram 1 to 5:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Your food item is Chicken Shawarma.\n Price=Rs 120");
			break;
		case 2:
			printf("Your food item is Chicken Momos.\n Price=Rs 150");
			break;
		case 3:
			printf("Your food item is Chicken Kebab.\n Price=Rs 180");
			break;
		case 4:
			printf("Your food item is Chicken 65.\n Price=Rs 100");
			break;
		case 5:
			printf("Your food item is Chicken Biryani.\n Price=420");
			break;
		default:
			printf("Sorry only 5 items are available.");
	}
	return 0;
}
