#include <stdio.h>
    
int main()
{
    /*Представете си, че сте на гише за регистрация за игра на мини голф.
    Започвате деня с 20 топчета за голф. Работата ви е да давате по едно топче и
    един клъб на всеки регистриран играч. Проследете с програма как се
    променят наличните топчета през деня:
    ▪ Идват 2 ма играча;
    ▪ Идва група от 5 ма играча;
    ▪ Идва група от 3 ма играча;
    ▪ Първите двама приключват и връщат топчетата;
    ▪ Идва група от 4 ма играча;
    ▪ Идва група от 6 ма играча;
    ▪ Групата от 5 човека приключва играта и връща оборудването, но 2 ма от тях
    решават да направят и втора обиколка.
    ▪ Отпечатайте на екрана броя на топчетата в края на деня.
    printf(“%d”, variableName);
    Продължение
    ▪ Ако цената за 1 игра, за 1 човек е 3,50 изчислете колко пари има в касата до
    момента.
    ▪ Проследете колко екипа има в момента на игрището.
    ▪ Отпечатайте и двата резултата на екран. */
    
    char totalBalls = 20;
    totalBalls = 20-2;
    totalBalls = totalBalls - 5;
    totalBalls = totalBalls - 3;
    totalBalls = totalBalls + 2;
    totalBalls = totalBalls - 4;
    totalBalls = totalBalls - 6;
    totalBalls = (totalBalls + 5) - 2;
    
    printf("Броя на топчетата в края на деня са: %d топки.\n", totalBalls);
    
    float sum = ((20 - totalBalls) * 3.5) + (2*3.5);
    char teamPlayers = 7 - 2;
    printf("Общата сума в касата е: %0.2f, а на игрището в момента има %d екипа.", sum, teamPlayers);
    
    
    return 0;
    
}
