#include<stdio.h>
void main()
{
        int i,n,a[30],pos,ele;
        printf("enter the size of array: ");
        scanf("%d",&n);
        printf("Enter the elements: ");
        for(i=0;i<n;i++)
        {       scanf("%d",&a[i]);}

        printf("enter the position of element you want to enter element: ");
        scanf("%d",&pos);
        printf("enter the element: ");
        scanf("%d",&ele);
        int tem, temp;
        for(i=0;i<n;i++)
        {
                if(i==pos)
                {
                                temp=a[i];
                                a[i]=ele;
                while(i<n)
                {
                        tem=a[i+1];
                        a[i+1]=temp;
                        temp=tem;
                        i++;
                }
        }

        }
        for(i=0;i<n;i++)
                                                                                                                                                               { printf("%d \t",a[i]);}
         printf("\nenter the position from where you want to delete the element: ");
         scanf("%d",&pos);
         for(i=0;i<n;i++)
        {
                if(i==pos)
                {
                        while(i<n)
                        {
                                a[i]=a[i+1];
                                i++;
                        }
                }
        }
        for(i=0;i<n;i++)
        { printf("%d ",a[i]);}


}