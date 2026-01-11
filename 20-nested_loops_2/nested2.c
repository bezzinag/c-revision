#include <stdio.h>

int main()
{
    int row = 0;
    int col = 0;
    char symbol = '\0';

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &col);

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    for(int x = 1; x <= row; x++)
    {
        for (int y = 1; y <= col; y++)
        {
            printf("%c ", symbol);
        }
        printf("\n");
   
    }

    return 0;
}