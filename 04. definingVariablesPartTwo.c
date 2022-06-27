#include <stdio.h>
 
int main()
{
    /*Дефинирайте променливи със стойност 43 112, -1 357 674,
    1 357 674, -1 357 674 000, 3 657 895 000.
    Изведете всяка променлива на екрана със printf()*/
    
    unsigned short valueOne = 43112;
    int valueTwo = -1357674;
    int valueTree = 1357674;
    int valueFour = -1357674000;
    long valueFive = 3657895000;
    
    
    printf("Excercise 2:\n%hu\n%d\n%d\n%d\n%li", valueOne, valueTwo, valueTree, valueFour, valueFive);
    
    return 0;
}
