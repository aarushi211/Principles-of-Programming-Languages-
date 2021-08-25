#include<stdio.h>
int main()
{
    int a[1000], i, n, even=0;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n; i++)
    {
        if (a[i]%2==0)
        even++; 
    }
    printf("\nNumber of even elements are = %d", even);
    return 0;
}