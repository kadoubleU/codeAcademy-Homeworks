#include <stdio.h>


int main() {
	
	int i;
	int nums[10];
	
	for (i = 0; i < 10; i++) {
		printf("Type a number: ");
		scanf("%d", &nums[i]);
	}
	
	for (i = 9; i >= 0 ; i--) {
		printf("Number: %d \n", nums[i]);
	}
	
	return(0);
}
