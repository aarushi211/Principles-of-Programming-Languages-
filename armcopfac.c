#include<stdio.h>
void armstrong();
void coprime();
int factorial();

void main()
{
    int number, fact;
    printf("\nEnter a number: ", number);
    scanf("%d",&number);
    armstrong(number);
    coprime(number);
    printf("\n%d is a factorial",factorial(number));
}

void armstrong(int number)
{
    int digit, sum = 0, input = number;
    while (number>0)
    { 
        digit = number%10;
        number = number/10;
        sum+=digit*digit*digit;
    }
    if (sum==input)
    printf("\n%d is an armstrong number", input);
else
printf("\n%d is not an armstrong number", input);
}

void coprime(int number)
{
    int i=1, factor, input=number, digit, reverse =0, hcf;
    while(number>0)
    {
        digit = number%10;
        number= number/10;
        reverse = reverse*10;
        reverse += digit;
    }
    number = input;
    while(i<=number)
    {
        if (number%i==0 && reverse%i==0)
        hcf = i;
        i++;
    }
    if (hcf==1)
    printf("\n%d and %d are coprimes", number, reverse);
    else
    printf("\n%d and %d are not coprimes", number, reverse);
}
int factorial (int i)
{
    if(i<=1)
    return 1;
    return i*factorial(i-1);
}
