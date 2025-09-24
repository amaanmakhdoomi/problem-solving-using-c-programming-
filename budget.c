#include <stdio.h>

int main() {
    float budget, expense, totalExpense = 0, savings;
    int n, i;

    printf("Enter your monthly budget: ");
    scanf("%f", &budget);

    printf("How many expenses do you want to enter? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter expense %d: ", i);
        scanf("%f", &expense);
        totalExpense += expense;
    }

    savings = budget - totalExpense;

    printf("\nTotal Expenses: %.2f", totalExpense);
    printf("\nRemaining Savings: %.2f\n", savings);

    if (savings < 0) {
        printf("You overspent this month!\n");
    }
    else if(savings == 0)
    {
        printf("Good job! You used all of your budget.\n");
    }
    else
    {
        printf("great you saved money this month");
    }

    return 0;
}

