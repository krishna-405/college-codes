/*  Create an array of structures Employee (with id, name, and salary) and use a pointer to traverse 
    and display the details.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
    struct Employee *next;
};
int main()
{
    struct Employee *head=NULL, *current=NULL;
    head = (struct Employee*) malloc (sizeof(struct Employee));
    if(head == NULL)
    {
        printf("No memory alloction");
        return 1;
    } 
    head->id = 124;
    strcpy(head->name, "krishna");
    head->salary = 50000;
    head->next = NULL;
    current = (struct Employee*) malloc (sizeof(struct Employee));
    if(current == NULL)
    {
        printf("No memory alloction");
        return 1;
    } 
    current->id = 180;
    strcpy(current->name, "pulkita");
    current->salary = 40000;
    head->next = current;
    current->next = NULL;

    printf("\nThe details of employee are : \n\n");
    printf("Id : %d\n", head->id);
    printf("Name : %s\n", head->name);
    printf("Salary : %.1f\n\n", head->salary); 
    printf("Id : %d\n", current->id);
    printf("Name : %s\n", current->name);
    printf("Salary : %.1f\n\n", current->salary); 

    current->id = 25;
    strcpy(current->name, "akshita");
    current->salary = 30000;
    head->next->next = current;
    current->next = NULL;
    printf("Id : %d\n", current->id);
    printf("Name : %s\n", current->name);
    printf("Salary : %.1f\n\n", current->salary); 
}
