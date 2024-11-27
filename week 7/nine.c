#include<stdio.h>
int main()
{
    struct student
    {
        int marks ;
        struct date
        {
        int day ;
        int month ;
        int year ;
        }s2;
    }s1;
    printf("Enter marks");
    scanf("%d",&s1.marks);
    printf("Enter day");
    scanf("%d",&s1.s2.day);
    printf("Enter month");
    scanf("%d",&s1.s2.month);
    printf("Enter year");
    scanf("%d",&s1.s2.year);
    printf("marks=%d \n",s1.marks);
    printf("day is %d \n",s1.s2.day);
    printf("month is %d \n",s1.s2.month);
    printf("year is %d \n",s1.s2.year);
    return 0;

}