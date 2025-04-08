/*  Write a function that takes a pointer to a Mobile structure (with name, model, and price) and 
modifies its values inside the function.*/

#include <stdio.h>
struct Mobile
{
    char name[20];
    char model[20];
    float price;
};
int main()
{
    struct Mobile phone;
    struct Mobile *mble;
    mble = &phone;
    printf("Enter the details :\n");
    printf("Name : ");
    scanf("%s", mble->name);
    printf("Model : ");
    scanf("%s", mble->model);
    printf("Price : ");
    scanf("%f", &mble->price);

    printf("\nThe details are :\n\n");
    printf("Name : %s\n", mble->name);
    printf("Model : %s\n", mble->model);
    printf("Price : %.1f\n", mble->price);
}
