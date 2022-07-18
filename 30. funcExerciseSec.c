#include <stdio.h>

int fact (int n);

int main() {
	
	int x, y;
	
	printf("Enter two numbers with interval between them: ");
	scanf("%d %d", &x, &y);
	
	long int resultFirst = fact(x);
	long int resultSec = fact(y);
	
	long int result = resultFirst + resultSec;
	
	printf("The sum of two factorials is: %ld", result);
		
    return 0;
}

int fact (int n) {
	
	int count, fact = 1;
	
	for (count = 1; count <= n; count++) {
		fact = fact * count;
	}
	
	return fact;
}
