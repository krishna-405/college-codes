#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the 1st angle : ");
    scanf("%d", &a);
    printf("Enter the 2nd angle : ");
    scanf("%d", &b);
    printf("Enter the 3rd angle : ");
    scanf("%d", &c);
    if((a+b+c)==180)
    {
        printf("The triangle is valid\n");
    }
    else 
    {
        printf("The triangle is invalid\n");
    }
}
