/*  Write a C program that defines a structure Student with members roll, name, and a pointer to another 
    structure Address. The Address structure has members street, city, and a pointer to another structure 
    Country. The Country structure has members name and code. Create a pointer to the Student structure 
    and use it to access and print the values of all members.   */
#include <stdio.h>
struct Country
{
    char cname[30];
    int code;
};
struct Address
{
    char street[50];
    char city[30];
};
struct Student
{
    int roll;
    char name[20];
};
int main()
{
    struct Student std;
    struct Student *ptr;
    struct Country country;
    struct Country *ptr1;
    struct Address add;
    struct Address *ptr2;
    ptr = &std;
    ptr1 = &country;
    ptr2 = &add;
  
    printf("Enter the details :\n");
    printf("Roll : ");
    scanf("%d", &ptr->roll);
    printf("Name : ");
    scanf("%s", ptr->name);
    printf("Street : ");
    scanf("%s", ptr2->street);
    printf("City : ");
    scanf("%s", ptr2->city);
    printf("C-Name : ");
    scanf("%s", ptr1->cname);
    printf("Code : ");
    scanf("%d", &ptr1->code);

    printf("\nThe details of a person are :\n");
    printf("Roll Number : %d\n", ptr->roll);
    printf("Name : %s\n", ptr->name);
    printf("Street : %s\n", ptr2->street);
    printf("City : %s\n", ptr2->city);
    printf("C-Name : %s\n", ptr1->cname);
    printf("Code : %d\n", ptr1->code);
}
