#include <stdio.h>

int main() {
	
	for(int row = 0; row<4; row++) {
		
		if(row == 0) {
			printf("     *  \n");
		}
		else if (row == 1){
			printf("   ***** \n");
		}else if (row == 2){
			printf("  *******\n");	
		}else { 
			printf(" *********\n");
		}
	}
	return 0;
}

