#include <stdio.h>


int main() {
	
	int i;
	int array[10] = {0,0, 1, 1, 0, 0, 0, 1, 0, 1};
	int sum = 0;
	
	for (i = 0; i < 10; i++) {
		if(array[i] == 1){
			sum += array[i];
		}
	}
	printf("The count of 1's in the array are: %d", sum);
		
	return 0;

}
