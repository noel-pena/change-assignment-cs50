#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void){
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while(cents < 0);

    int total_coins = 0;

    int quarters = calculate_quarters(cents);
    total_coins += quarters;
    cents %= 25;

    int dimes = calculate_dimes(cents);
    total_coins += dimes;
    cents %= 10;

    int nickels = calculate_nickels(cents);
    total_coins += nickels;
    cents %= 5;

    int pennies = calculate_pennies(cents);
    total_coins += pennies;

    printf("%i\n", total_coins);
}

int calculate_quarters(int cents){
    int quarters = cents / 25;
    cents %= 25;
    return quarters;
}

int calculate_dimes(int cents){
    int dimes = cents / 10;
    cents %= 10;
    return dimes;
}

int calculate_nickels(int cents){
    int nickels = cents / 5;
    cents %= 5;
    return nickels;
}

int calculate_pennies(int cents){
    return cents;
}
