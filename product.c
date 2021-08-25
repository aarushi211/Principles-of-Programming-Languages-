#include<stdio.h>

struct product 
{
    char name[30];
    int price, qnt, amt;
};

int main()
{
  struct product *p;
  struct product a; 
  p=&a; 
  printf("Enter the details of the product as follows-\n");
  printf("Enter the product name: ");
  scanf("%s", &p->name);
  printf("Enter the price per product: ");
  scanf("%d", &p->price);
  printf("Enter the quantity:");
  scanf("%d", &p->qnt);
  p->amt = p->price * p->qnt; 
  printf("Product name is %s\n", p->name);
  printf("Price per product is %d\n", p->price);
  printf("Quantity Purchased = %d\n", p->qnt);
  printf("Total amount = %d\n", p->amt); 
    return 0;
}