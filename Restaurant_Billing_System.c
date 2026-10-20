
#include <stdio.h>

int main()
{
    int choice, quantity;
    float price, itemTotal, total = 0;
    float discount, payable;

    do
    {
        printf("\n--- RESTAURANT MENU ---\n");
        printf("1. Pizza       Rs. 200\n");
        printf("2. Burger      Rs. 100\n");
        printf("3. Sandwich    Rs. 80\n");
        printf("4. Cold Drink  Rs. 40\n");
        printf("5. Finish Order\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            switch (choice)
            {
                case 1: price = 200; break;
                case 2: price = 100; break;
                case 3: price = 80; break;
                case 4: price = 40; break;
            }

            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if (quantity > 0)
            {
                itemTotal = price * quantity;
                total = total + itemTotal;

                printf("Item total = Rs. %.2f\n",
                       itemTotal);
             printf("Grand total = Rs. %.2f\n", total);
            }
            else
                printf("Invalid quantity!\n");
        }
        else if (choice != 5)
        {
            printf("Invalid choice!\n");
        }

    } while (choice != 5);

    if (total >= 500)
        discount = total * 0.10;
    else
        discount = 0;

    payable = total - discount;

    printf("\n--- FINAL BILL ---\n");
    printf("Grand total = Rs. %.2f\n", total);
    printf("Discount = Rs. %.2f\n", discount);
    printf("Payable amount = Rs. %.2f\n", payable);

    return 0;
}
