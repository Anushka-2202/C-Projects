
#include <stdio.h>

int main()
{
    int units;
    float charge, total;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Invalid units!\n");
        return 0;
    }
    else if (units <= 100)
    {
        charge = units * 2;
    }
    else if (units <= 200)
    {
        charge = 100 * 2 + (units - 100) * 3;
    }
    else
    {
        charge = 100 * 2 + 100 * 3
                 + (units - 200) * 5;
    }

    total = charge + 50;

    printf("Energy charge = Rs. %.2f\n", charge);
    printf("Fixed charge = Rs. 50\n");
    printf("Total bill = Rs. %.2f\n", total);

    return 0;
}
