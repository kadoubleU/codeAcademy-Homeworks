#include <stdio.h>
#include <math.h>

int main() {
	
	int num;
	int a; //Scanned number
	int power = 2;
	int result;
	int sum;
	
	scanf("%d", &num);        
	
	for(num = 0; num < 200; num++) {
       
		result = pow(num, power);
		sum = result + result;
		
	}

    printf("%d", sum);
	
	return 0;
}
		

