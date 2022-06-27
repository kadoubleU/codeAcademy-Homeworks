#include <stdio.h>
    
int main()
{
    /*Създайте С програма, която калкулира стойността на покупки в плод
    и зеленчук. Клиентът може да закупи различна комбинация от продукти.
    Имате следните налични продукти и цени:
    Домати- 4.5 лв.,Краставици-2.80 лв.,
    Ябълки- 2.50 лв.,Череши- 5.60 лв. */
    
    float tomatoesKg, cucumbersKg, applesKg, cherriesKg;
    
    float tomatoes = 4.5;
    float cucumbers = 2.80;
    float apples = 2.50;
    float cherries = 5.60;
    
    printf("Добре дошли в нашият магазин.\nКолкo кг домати ще желаете?: ");
    scanf("%f", &tomatoesKg);
    
    printf("Добре. Колко кг краставици ще желаете?: ");
    scanf("%f", &cucumbersKg);
    
    printf("Супер! А колко кг ябълки ще желаете?: ");
    scanf("%f", &applesKg);
    
    printf("Чудесно! Колко кг череши ще желаете?: ");
    scanf("%f", &cherriesKg);
    
    float tomatoesPrice = tomatoes * tomatoesKg;
    float cucumbersPrice = cucumbers * cucumbersKg;
    float applesPrice = apples * applesKg;
    float cherriesPrice = cherries * cherriesKg;
    
    float totalPrice = tomatoesPrice + cucumbersPrice + applesPrice + cherriesPrice;
    
    printf("\nОбщата сума, коятo дължите е: %0.2f лв.\n", totalPrice);
    
    return 0;
}
