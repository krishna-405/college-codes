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
    if(a==b && a==c || b==a && b==c || c==a && c==b)
    {
        printf("It is an equilateral triangle.\n");
    }
    else if(a==b || b==c || c==a)
    {
        printf("It is an isosceles triangle\n");
    }
    else 
    {
        printf("It is neither an equilateral triangle nor an isosceles triangle.\n");
    }
}
