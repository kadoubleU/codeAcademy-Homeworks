#include <stdio.h>


int main() {
	
	int i;
	float price[10];
	float sum = 0;

	
	for (i = 0; i < 10; i++) {
		printf("Type a price [%d]: ", i+1);
		scanf("%f", &price[i]);
	}
	
	for (i = 0; i < 10 ; i++) {
		
		sum += price[i];
	}
		printf("The sum is: %.2f \n", sum/10);
		
		
	 
	return(0);
}
