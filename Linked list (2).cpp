/*  Implement a simple singly linked list using a structure with a pointer to the next node. Perform 
    insert and display operations.*/

#include <stdio.h>
#include <stdlib.h>
struct Data
{
    int data;
    struct Data *next;
};
int main()
{
    struct Data *head = NULL, *current = NULL;

    head = (struct Data*) malloc (sizeof(struct Data));
    if(head == NULL)
    {
        printf("No memory alloction\n");
        return 1;
    }

    head->data = 2;
    head->next = NULL;
    printf("Data : %d\n", head->data);

    current = (struct Data*) malloc (sizeof (struct Data));
    if(current == NULL)
    {
        printf("No memory alloction\n");
        return 1;
    }

    current->data = 4;
    head->next = current;
    current->next = NULL;
    printf("Data : %d\n", current->data);

    current->data = 6;
    head->next->next = current;
    current->next = NULL;
    printf("Data : %d\n", current->data);

    free(head);
    free(current);

    return 0;
}
