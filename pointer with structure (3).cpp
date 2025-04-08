/*  Write a C program that defines a structure Student with members roll, name, and a pointer to 
    another Student structure. Create a linked list of Student structures using dynamic memory 
    allocation and pointers. Write a function to insert a new node at the beginning of the list and 
    print the list.  */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student
{
    int roll;
    char name[20];
    struct Student *next;
};
int main()
{
    struct Student *head=NULL, *current=NULL;
    head = (struct Student*) malloc (sizeof(struct Student));
    if(head == NULL)
    {
        printf("No memory alloction\n");
        return 1;
    }
    head->roll = 124;
    strcpy(head->name,"krishna");
    head->next = NULL;
    printf("%d -- %s\n", head->roll, head->name);
    current = (struct Student*) malloc (sizeof(struct Student));
    if(current == NULL)
    {
        printf("No memory alloction\n");
        return 1;
    }
    current->roll = 180;
    strcpy(current->name, "pulkita");
    head->next = current;
    current->next = NULL;
    printf("%d -- %s\n", current->roll, current->name);
    current->roll = 25;
    strcpy(current->name, "akshita");
    head->next->next = current;
    current->next = NULL;
    printf("%d -- %s\n", current->roll, current->name);

    free(head);
    free(current);
    return 0;
}
