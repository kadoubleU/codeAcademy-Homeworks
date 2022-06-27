#include <stdio.h>
 
int main() {
    int userNum;
    
    printf("What is your favorite number from 0 to 100?\n");
    printf("Answer: ");
    scanf("%d", &userNum);
    printf("Really?! My favorite number is too %d!", userNum);
}
