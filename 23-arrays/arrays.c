#include <stdio.h>

int main()
{
    int numbers[] = {3,4,67,6};
    char grades[] = {'b','d', 'e'};

    printf("%d\n", numbers[0]);

    printf("%c\n", grades[2]);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    for (int x = 0; x < 3; x++)
    {
        printf("%c ", grades[x]);
    }
    printf("\n");

    printf("%d bytes\n", sizeof(numbers));
    printf("%d bytes for and int\n", sizeof(numbers[0]));

    printf("%d bytes\n", sizeof(grades));
    printf("%d bytes for a char\n", sizeof(grades[1]));

    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int y = 0; y < size; y++)
    {
        printf("%d ", numbers[y]);
    }

    return 0;
}