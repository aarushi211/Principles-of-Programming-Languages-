#include<stdio.h>

struct student_record
{
    char name[100], reg[10], DOB[8];
    int  SAP_ID[20], enro_no[20];
};
struct date
{
    int date[2], month[2], year[4];
};
int main()
{
    struct student_record s[100];
    struct date d[10];
    int i, n;
    printf("Enter the total number of students: ");
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        printf("Enter the details of the student %d as follow-\n", i+1);
        printf("Name: ");
        scanf("%s", &s[i].name);
        printf("Date of Birth: ");
        scanf("%s", &s[i].DOB);
        printf("Registeration Number: ");
        scanf("%s", &s[i].reg);
        printf("SAP ID: ");
        scanf("%d", s[i].SAP_ID);
        printf("Enrollment Number: ");
        scanf("%d", &s[i].enro_no);
        printf("Date of Joining-\n");
        printf("Date: ");
        scanf("%d", &d[i].date);
        printf("Month: ");
        scanf("%d", &d[i].month);
        printf("Year: ");
        scanf("%d", d[i].year);
    }
    
    return 0;
}