#include <stdio.h>

int main()
{
    int numbers[5] = {0};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int a = 0; a < size; a++)
    {
        printf("Please enter a number for the array: ");
        scanf("%d", &numbers[a]);
    }

    printf("\n");
    printf("These are the numbers you chose: ");

    for (int b = 0; b < size; b++)
    {
        printf("%d ", numbers[b]);

    }

    return 0;
}