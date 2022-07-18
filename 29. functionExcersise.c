#include <stdio.h>

float readR(float a);

int main()

{
	float x;
	float result;

	result = readR(x) * readR(x)* readR(x);
	
	printf("The result is: %.2f", result);
	
    return 0;
}

float readR(float a) {
	printf("Enter a real number: ");
	scanf("%f", &a);
	
	return a;
}
