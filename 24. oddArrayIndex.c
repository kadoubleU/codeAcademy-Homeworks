#include <stdio.h>


int main() {
	
	/*Напишете програма, която чете 10 цели числа от клавиатурата
	и извежда елементите на масива, които са записани на нечетна
	позиция.*/
	
	int i;
	int num[10];
	
	for (i = 0; i < 10; i++) {
		printf("Type a number [%d]: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for (i = 0; i < 10 ; i++) {
		
	 if (i % 2 != 0) {
	 	printf("The num [%d] is: [%d] \n", i, num[i]);
	 }
	}
  
	return(0);
}
