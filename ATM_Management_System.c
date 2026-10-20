
#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, amount;

    do
    {
        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Balance = Rs. %.2f\n", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                balance = balance + amount;
                printf("Deposit successful.\n");
                printf("Updated balance = Rs. %.2f\n", balance);
            }
            else
                printf("Invalid amount!\n");
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= 0)
                printf("Invalid amount!\n");
            else if (amount > balance)
                printf("Insufficient balance!\n");
            else
            {
                balance = balance - amount;
                printf("Withdrawal successful.\n");
                printf("Updated balance = Rs. %.2f\n", balance);
            }
            break;

        case 4:
            printf("Thank you for using ATM.\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
