#include <stdio.h>
 
int main()
{
    /*Defining variables with value: 
    -250, 250, 4 589 498,
    10 000 000 000 000 000 000,
    -9 000 000 000 000 000 000*/
    
    short int siValueOne= -250;
    unsigned char ucValueTwo = 250;
    int iValueThree = 4589498;
    double dValueFour = 10000000000000000000; 
    long long int llValueFive = -9000000000000000000;
    
    printf("Excercise 1:\n%hi\n%hhu\n%d\n%.0lf\n%lli", siValueOne, ucValueTwo, iValueThree, dValueFour, llValueFive);
    
    return 0;
}
