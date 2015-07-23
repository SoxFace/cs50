#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount;
    do {
        printf("O hai! How much change is owed?\n");
        amount = GetFloat();
    }
    while(amount < 0);
    
    // convert float to int
    int change = round(amount * 100);
    
    // how many quarters
    int quarters = change / 25;
    change -= (quarters * 25);
    
    // how many dimes
    int dimes = change / 10;
    change -= (dimes * 10);
    
    // how many nickels
    int nickels = change / 5;
    change -= (nickels * 5);
    
    // how many pennies
    int pennies = change / 1;
    change -= (pennies * 1);
    
    // how many coins in total
    int total = quarters + nickels + dimes + pennies;
    printf("%d\n", total);
}
