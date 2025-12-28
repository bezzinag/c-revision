#include <stdio.h>

int main()
{
    int choice = 0;
    float weightkg = 0;
    float convertedkg = 0;
    float weightlb = 0;
    float convertedlb = 0;

    
    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    
    if (choice == 1)
    {
        printf("Enter the weight in Kg: ");
        scanf(" %f", &weightkg );
        convertedkg = weightkg * 2.20462;
        printf("Conversion Result: %.2f pounds\n", convertedkg);
    }

    else if (choice == 2)
    {
        printf("Enter the weight in Lb: ");
        scanf("%f", &weightlb);
        convertedlb = weightlb / 2.20462;
        printf("Conversion Result: %.2f kilograms\n", convertedlb);
    }

    else
    {
        printf("Invalid choice. Please select 1 or 2.\n");
    }

    return 0;
}