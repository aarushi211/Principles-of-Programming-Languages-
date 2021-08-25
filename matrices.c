#include<stdio.h>
void main()
{
    static int array[10][10];
    int i, j, m, n, sum = 0;

    printf("\nEnter the order of the matrix: ");
    scanf("%d %d", &m, &n); 
    printf("\nEnter the co-efficient of the matrix: ");

    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
        {
            sum = sum + array[i][j];
        }
        printf("\nSum of %d row is = %d", i, sum);
        sum = 0;
    }
    sum = 0;
    for (j=0; j<n; ++j)
    {
        for (i=0; i<m; ++i)
        {
            sum = sum + array[i][j];
        }
        printf("\nSum of the %d column is = %d", j, sum);
    }
}