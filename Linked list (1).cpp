#include <stdio.h>
#include <stdlib.h>
struct Data
{
    int data;
    struct Data *next;
};
int main()
{
    struct Data *head=NULL, *current=NULL;
    head = (struct Data*) malloc (sizeof(struct Data));
    if(head == NULL)
    {
        printf("No memory alloction");
        return 1;
    }
    head->data = 3;
    head->next = NULL;
    printf("Data : %d\n", head->data);

    current = (struct Data*) malloc (sizeof(struct Data));
    if(current == NULL)
    {
        printf("No memory alloction");
        return 1;
    }
    current->data = 6;
    current->next = NULL;
    head->next = current;
    printf("Data : %d\n", current->data);

    free(head);
    free(current);

    return 0;
}
