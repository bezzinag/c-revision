#include <stdio.h>
int square(int num)
{
    return num * num;
}

int main()
{   
    //int x = 3 * 3;
    //int y = 5 * 5;
    //int z = 7 * 7;

    int x = square(3);
    int y = square(5);
    int z = square(7);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);


    return 0;
}