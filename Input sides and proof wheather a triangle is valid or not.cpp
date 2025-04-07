#include <stdio.h>
int main()
{
    int ab, bc, ca;
    printf("Enter the 1st side : ");
    scanf("%d", &ab);
    printf("Enter the 2nd side : ");
    scanf("%d", &bc);
    printf("Enter the 3rd side : ");
    scanf("%d", &ca);
    if(ab+bc<=ca || bc+ca<=ab || ca+ab<=bc)
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
}
