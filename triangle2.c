#include<stdio.h>

int triangle_area(int base, int height);
void swap(int , int);
float* remainder (int a, int b);

void  main()
{
        int num1,num2;
        printf("Enter First number:");
        scanf("%d",&num1); 
        printf("Enter Second number:"); 
        scanf("%d",&num2);

        printf("\n\nArea of Right angled triangle having base %d and height %d is- ",num1,num2);
        triangle_area(num1,num2);
        printf("\n\nRemainder when %d is divided by %d is-",num1,num2);

        remainder(num1, num2);
        printf("\n\nSwapping the two numbers using bitwise operator-"); swap(&num1,&num2);
}

int triangle_area(int base,int height)
{
        float area; 
        area=0.5*base*height;
        printf("\nArea of triangle is:%f",area); 
        return 0;
}
void swap(intx,inty)
{
        printf("\nBefore swapping: %d,%d",x,y);
        *x = *x ^ *y;
        *y = *x ^ *y;
        *x = *x ^ y;
        printf("\nAfter swapping: %d,%d",x,y);
}
float remainder(int a, int b)
{
        float rem;
        rem=a%b;
        printf("\nRemainder=%f",rem);
        return(0);
}