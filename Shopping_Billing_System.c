
#include <stdio.h>

int main()
{
    int choice = 0;
    float quantity, price, cost;
    float subtotal = 0, discount, finalBill;

    while (choice != 5)
    {
        printf("\n--- SHOPPING MENU ---\n");
        printf("1. Rice       Rs. 60/kg\n");
        printf("2. Sugar      Rs. 45/kg\n");
        printf("3. Oil        Rs. 150/litre\n");
        printf("4. Milk       Rs. 30/litre\n");
        printf("5. Finish Shopping\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            switch (choice)
            {
                case 1: price = 60; break;
                case 2: price = 45; break;
                case 3: price = 150; break;
                case 4: price = 30; break;
            }

            printf("Enter quantity (kg/litre): ");
            scanf("%f", &quantity);

            if (quantity > 0)
            {
                cost = price * quantity;
                subtotal = subtotal + cost;

                printf("Product cost = Rs. %.2f\n", cost);
                printf("Subtotal = Rs. %.2f\n", subtotal);
            }
            else
                printf("Invalid quantity!\n");
        }
        else if (choice != 5)
        {
            printf("Invalid choice!\n");
        }
    }

    if (subtotal > 1000)
        discount = subtotal * 0.05;
    else
        discount = 0;

    finalBill = subtotal - discount;

    printf("\n--- FINAL BILL ---\n");
    printf("Subtotal = Rs. %.2f\n", subtotal);
    printf("Discount = Rs. %.2f\n", discount);
    printf("Final bill = Rs. %.2f\n", finalBill);

    return 0;
}

