#include<stdio.h>
float *Remainder (int a, int b)
{
    return ((float*)(a%b));
}
int triangle_area();
void swap();
void main()
{
    int a,b;
    int *c, *d;
    c=&a;
    d=&b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nRemainder = %d", Remainder(a,b));
    printf("\nArea of Right Triangle = %d", triangle_area(a,b));
    swap(c,d);
}
int triangle_area(int base, int height)
{
    return ((base*height)/2);
}
void swap(int*x, int*y)
{
    printf("\nBefore Swapping: %d, %d", *x, *y);
    *x = *x ^  *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
    printf("\nAfter Swapping: %d, %d", *x, *y);
}
