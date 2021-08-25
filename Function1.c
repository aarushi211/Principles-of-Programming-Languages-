#include<stdio.h>
void coprime();
void main();
{
    int num1, num2, hcf, i;
    printf("\nEnter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i=1; 1<=num1; i++)
    {
        if (num1%i==0 && num2%i==0)
        hcf = i;
    }
    if (hcf==1)
    printf("\n%d and %d are coprime numbers", num1, num2);
    else
    {
        printf("\n%d and %d are not coprime numbers", num1, num2);
    }    
}

