#include <stdio.h>
#include <stdlib.h>
struct Book
{
    char title[100];
    char author[100];
    int year;
};
int main()
{
    struct Book book;
    struct Book *ptr;
    ptr = (struct Book*) malloc (sizeof(struct Book));
    if(ptr == NULL)
    {
        printf("No memory alloction");
        return 1;
    }
    printf("Title : ");
    scanf("%s", ptr->title);
    printf("Author : ");
    scanf("%s", ptr->author);
    printf("Year : ");
    scanf("%d", &ptr->year);

    printf("\nBook Details :\n");
    printf("Title of the Book : %s\n", ptr->title);
    printf("Author of the Book : %s\n", ptr->author);
    printf("Publish Year : %d\n", ptr->year);

    free(ptr);
    return 0;
}
