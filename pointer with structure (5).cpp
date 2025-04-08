/*  Write a program to dynamically allocate memory for a structure Book (with members title, author, and 
    price), take input from the user, and print the details.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book
{
    char title[20];
    char author[20];
    float price;
};
int main()
{
    struct Book book;
    struct Book *ptr;
    ptr = &book;
    if(ptr == NULL)
    {
        printf("No memory alloction\n");
        return 1;
    }
    printf("Enter the details of the book :\n");
    printf("Enter the title : ");
    scanf("%s", ptr->title);
    printf("Enter the author : ");
    scanf("%s", ptr->author);
    printf("Enter the price : ");
    scanf("%f", &ptr->price);

    printf("\n The details are :\n");
    printf("Title : %s\n", ptr->title);
    printf("Author : %s\n", ptr->author);
    printf("Price : %.2f\n", ptr->price);
}
