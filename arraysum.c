#include<stdio.h>
         int sum=0;
         int func( int a[], int size)
        {

                                if(size>=0)
                                return sum= sum+ a[size]+ func(a,size-1);
                                else
                                return 0;
        }
void main()
{
                int i,a[5];
                printf("enter values of array: ");
                for(i=0;i<5;i++)
                {
                        scanf("%d",&a[i]);
                }
                int y=func(a ,4);
                printf("sum=%d",y);

}