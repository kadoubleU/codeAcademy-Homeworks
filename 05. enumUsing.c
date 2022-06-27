#include <stdio.h>
 
int main()
{
    //Дефинирайте с enum месеците от годината.
    
    enum months{Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    
    printf("%d. January\n", Jan);
    printf("%d. February\n", Feb);
    printf("%d. Marth\n", Mar);
    printf("%d. April\n", Apr);
    printf("%d. May\n", May);
    printf("%d. June\n", Jun);
    printf("%d. July\n", Jul);
    printf("%d. August\n", Aug);
    printf("%d. September\n", Sep);
    printf("%d. October\n", Oct);
    printf("%d. November\n", Nov);
    printf("%d. December\n", Dec);
    
    return 0;
}
