#include <stdio.h>

int main() {
	
	int iValue = 0;
	
	while(iValue<13) {
		iValue++;
		//Print numbers from 0 to 13 without 12
		if(iValue==12) {
			continue;
	}
	printf("%d\n", iValue);
}
	
	return 0;

}
