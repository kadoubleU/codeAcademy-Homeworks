#include <stdio.h>


int main() {
	
	float num[10];
	int i;

	
	for (i=0; i<10; i++){
		printf("Put a number: ");
		scanf("%f", &num[i]);
	}

	for(i = 0; i < 10; i++) {
		
		if(num[i] == (int)num[i]) {
			printf("Number [%d] = %.0f \n", i, num[i]);
		}
	}		
	
		
	return 0;

}
