#include <stdio.h>

int main() {
	
int a;

do {
	printf("Enter a number: ");
	scanf("%d", &a);
} while(a >= 10 && a <= 99);

printf("Not allowed number");
return 0;

}
