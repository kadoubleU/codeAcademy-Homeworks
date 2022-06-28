#include <stdio.h>

int main() {
	
	/*Exercise: Make a for loop that prints the even numbers from 8 to 16.*/
	int i;
	
	for(i=8; i<=16; i++) {
		if(i % 2 == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
	
}
