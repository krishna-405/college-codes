#include <stdio.h>
int main()
{
    int n, count, fact=1;
    printf("Enter the number : ");  
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;    
    }
    printf("Factorial number : %d\n", fact);
}
