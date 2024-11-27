#include<stdio.h>
int main()
{
    struct student
    {
        unsigned int x : 10;
        unsigned int status : 1;
        unsigned int date : 5;
        unsigned int month : 4;
        unsigned int year : 15;
    }s1;
    s1.x=5;
    s1.status=1;
    s1.date=27;
    s1.month=11;
    s1.year=2024;
    printf("%d %d %d %d %d",s1.x,s1.status,s1.date,s1.month,s1.year);
    return 0;

}