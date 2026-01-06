#include <stdio.h>

int getMax(int x, int y)
{
  if( x > y)
  {
    return x;
  }
  else 
  {
    return y;
  }
}

int main()
{
    int a = 0;
    int b = 0;
    
    
    printf("Please enter a number: ");
    scanf("%d", &a);

    printf("Please enter another number: ");
    scanf("%d", &b);

    int max = getMax(a, b);

    printf("The maximum number is %d\n", max);
    return 0;
}