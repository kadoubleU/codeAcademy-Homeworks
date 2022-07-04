#include <stdio.h>

int main() {
	
	int i;
	int array[10];
	int count = 0;
	
	for (i = 0; i < 10; i++) {
		printf("Type a number [%d]: ", i);
		scanf("%d", &array[i]); 
	}
	
	for (i = 0; i < 10; i++) {
		if (array[i] > 9 && array[i] < 100) {
			printf("The number %d is two digits\n", array[i]);
			
			count += i;
		}
	}
	printf("The two-digit numbers are %d", count);
	
	return 0;

}
