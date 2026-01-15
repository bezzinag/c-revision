#include <stdio.h>

int main()
{
    int numbers[][4] ={{4,3,2,1}, 
                       {1,2,3,4}, 
                       {6,7,8,9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}