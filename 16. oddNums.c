#include <stdio.h>

int main() {
	
	/*С помощта на цикъл do { } while да се намери
произведението на нечетните числа от 1 до 20*/
	
int a = 1;
int num;

	do {
		if (a % 2 != 0) {
		 num = a*a;
			printf("The num %d is odd.\n", num);
            a++;
		} else {
			printf("The num 2 is even.\n");
		}		
		a++;
	}while(a <= 20);
}
