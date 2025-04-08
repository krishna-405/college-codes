/*  Define a structure Date with day, month, year. Create another structure Person with name and DOB 
    (of type Date). Use pointers to access and print the values.*/
#include <stdio.h>
#include <string.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct Person
{
    char name[20];
};
int main()
{
    struct Date date;
    struct Date *ptr;
    struct Person person;
    struct Person *ptr1;
    ptr = &date;
    ptr1 = &person;
    printf("Day : ");
    scanf("%d", &ptr->day);
    printf("Month : ");
    scanf("%d", &ptr->month);
    printf("Year : ");
    scanf("%d", &ptr->year);
    printf("Name : ");
    scanf("%s", ptr1->name);
    printf("\nThe person details :\n");
    printf("Name : %s\n", ptr1->name);
    printf("DOB : %d-%d-%d\n", ptr->day, ptr->month, ptr->year);
}
