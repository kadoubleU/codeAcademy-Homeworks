#include <stdio.h>

int main() {
	
	int i;
	char array[10] = {'a', '2', 'A', 'b', 'm', 'R', '20', '3', '5', 'v'};
	
	for(i = 0; i < 10; i++) {
		if (array[i] == 'A') {
			printf("The index position of the letter A is: %d\n", i);
			printf("The ASCII code of letter A is: %d", array[i]);
		}
	}
		
	return 0;

}
