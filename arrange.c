#include<stdio.h>
void main()
{
    int number[30];
    int i, j, a, n, key, low, mid, high;

    printf("\nEnter the length of array: ");
    scanf("%d", &n);

    printf("\nEnter numbers: ");
    for (i=0; i<n; ++i)
    {
    scanf("%d", &number[i]);
    } 

    for (i=0; i<n; ++i)
    {
        for (j=i+1; j<n; ++j)
        {
            if (number[i]< number [j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("\nThe numbers arranged in desending order is as follows: "); 
    for (i=0; i<n; ++i)
    {
        printf("%d ", number[i]);
    }
    printf("\nEnter the integer you want to find: ");
    scanf("%d", &key);
    low = 0;
    high = n-1;
    mid = (low+high)/2;

    while (low<=high)
    {
        if(number[mid] < key)
        low = mid + 1;
        else if (number[mid]==key)
        { printf("\n%d found at location %d", key, mid+1);
        break;}
        else
        {
            high = mid -1;
            mid = (low + high)/2;
        }
        if(low > high)
        printf("Not found! %d isn't present in the array list", key);
    }
}