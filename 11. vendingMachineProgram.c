#include <stdio.h>

int main() {
	
	char item;
	
	printf("1- Chocolate\n");
	printf("2 - Sticks\n");
	printf("3 - Salt Biscuits\n");
	printf("4 - Sweet Biscuits\n");
	printf("5 - Water\n");
	printf("6 - Juice\n");
	
	printf("Make your choice: ");
	scanf("%d", &item);
	
	switch (item) {
		case 1:
			printf("You choose Chocolate.\n");
			break;
		case 2:
			printf("You choose Sticks");
			break;
		case 3:
			printf("You choose Salt Biscuits");
			break;
		case 4:
			printf("You choose Sweet Biscuits");
			break;
		case 5:
			printf("You choose Water");
			break;
		case 6:
			printf("You choose Juice");
			break;
		default:
			printf("There is no such option");
			break;
			
	}
	
	return 0;
	
}
