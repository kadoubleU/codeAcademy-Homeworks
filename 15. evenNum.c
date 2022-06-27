#include <stdio.h>

int main() {
	
	/*С помощта на цикъл while да се намери
произведението на четните числа от 1 до 20*/
	
int a = 1;
int num;

	while(a <= 20) {
		if (a % 2 == 0) {
		 num = a*a;
			printf("The num %d is even.\n", num);
            a++;
		} else {
			printf("The num 1 is odd.\n");
		}		
		a++;
	}
	num *= num;
	
	printf("Result: %d", num);
	
}
