#include <stdio.h>

int main() {
	
	int row;
	for(int row = 0; row<=13; row++) {
	
	if(row == 0 || row == 13) {
		printf("   *   \n");
	}
	else if (row == 1 || row == 3 || row == 5 || row == 7 || row == 9 || row == 11){
		printf(" \n");
	}else if (row == 2 || row == 10) {
		printf("  * *  \n");
	}else if(row == 4 || row == 6 || row == 8) {
		printf(" *  * \n");
	}
	}
		return 0;
}
