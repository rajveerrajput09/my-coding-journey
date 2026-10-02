// Suppose you work at a store and a customer gives you $1.00 (100 cents) for candy that costs $0.50 (50 cents). You’ll need to pay them their “change,” the amount leftover after paying for the cost of the candy. When making change, odds are you want to minimize the number of coins you’re dispensing for each customer, lest you run out (or annoy the customer!). In a file called cash.c in a folder called cash, implement a program in C that prints the minimum coins needed to make the given amount of change, in cents, as in the below:

// Change owed: 25
// 1
// But prompt the user for an int greater than 0, so that the program works for any amount of change:

// Change owed: 70
// 4
// Re-prompt the user, again and again as needed, if their input is not greater than or equal to 0 (or if their input isn’t an int at all!).

#include <stdio.h>

int main(void)
{
    int money;
    int times = 0;
    // prompt the user about the money
    while (1)
    {
        printf("Changed Owned:  ");

        if (scanf("%d", &money) == 1 && money > 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    while (money > 0)
    {
        // cheak if the cahnge owed can be divided by the 25
        if (money >= 25)
        {
            money = money - 25;
            times += 1;
        }

        // cheak if the cahnge owed can be divided by the 106
        else if (money >= 10)
        {
            money = money - 10;
            times += 1;
        }
        // cheak if the cahnge owed can be divided by the 5
        else if (money >= 5)
        {
            money = money - 5;
            times += 1;
        }
        // cheak if the cahnge owed can be divided by the 1
        else if (money >= 1)
        {
            money = money - 1;
            times += 1;
        }
    }

    printf("%d", times);

    return 0;
}