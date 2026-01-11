//Continue is used to skip the current iteration of a loop and continue with the next iteration.
#include <stdio.h>

int main()
{
    for (int x = 1; x <= 10; x++)
    {
        if (x == 4)
        {
            continue;
        }

        printf("%d\n", x);
    }

    return 0;
}