#include<stdio.h>
void armstrong();
void coprime();
int factorial();
float*Remainder (int a, int b)
{
    return ((float*)(a%b));
}
int triangle_area();

void swap();
void main()
{
    int number, fact;
    printf("\nEnter a number:");
    scanf("%d",&number);
    armstrong (number);
    coprime (number);
    printf("\n%d is the factorial", factorial(number));
    int a,b;
    int *c, *d;
    c=&a;
    d=&b;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nRemainder = %d", Remainder (a,b));
    printf("Area of right angled triangle = %d", triangle_area(a,b));
    swap (c,d);
}
void armstrong(int number)
{
    int digit, sum=0, input=number;
    while (number>0)
    {
        digit = number%10;
        number = number/10;
        sum+=digit*digit*digit;
    }
    if (sum==input)
    printf("\n%d is an Armstrong Number", input);
}
void coprime(int number)
{
    int i=1, factor, input = number, digit, reverse=0, hcf;
    while (number>0)
    {
        digit = number%10;
        number = number/10;
        reverse=reverse*10;
        reverse+=digit;
    }
    number=input;
    while (i<=number)
    {
        if (number%i==0 && reverse%i==0)
        hcf=i;
        i++;
    }
    if (hcf==1)
    {printf("\n%d and %d are coprime numbers", number, reverse);}
    else 
    printf("\n%d and %d are not coprime numbers", number, reverse);
    } 
        int factorial(int i) 
    {
        if(i<=1)
        return 1;
        return i*factorial(i-1);
    }
    int triangle_area(int base, int height)
    {
        return((base*height)/2); 
    }
    void swap (int*x, int*y)
    {
        printf("\nBefore Swapping: %d, %d", *x, *y);
        *x = *x ^ *y;
        *y = *x ^ *y;
        *x = *x ^ *y;
        printf("\nAfter Swapping: %d, %d", *x, *y);
    }
