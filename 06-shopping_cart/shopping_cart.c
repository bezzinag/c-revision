#include <stdio.h>

int main()
{
 char item[10];
 float price;
 int quantity;
 float total;

 printf("Enter the name of the product you wish to buy.\n");
 scanf("%s", &item);

 printf("Enter the price of one %s.\n", item);
 scanf("%f", &price);

 printf("Kindly enter quantity to buy.\n");
 scanf("%d", &quantity);

 total = price * quantity;

 printf("\n");
 printf("Total for %d %s at %.2f is:\n", quantity, item, price);
 printf("%.2f Euro\n", total);

 return 0;

}