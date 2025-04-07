#include <stdio.h>
int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c", &a);
    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
        printf("It is an alphabet\n");
    }
    else 
    {
        printf("It is not an alphabet\n");
    }
}
