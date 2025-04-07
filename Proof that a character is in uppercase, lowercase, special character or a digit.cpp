#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%s", &a);
    if(isupper(a))
    {
        printf("Character is in upper case\n");
    }
    else if(islower(a))
    {
        printf("Character is in lower case\n");
    }
    else if(isdigit(a))
    {
        printf("It is a digit\n");
    }
    else 
    {
        printf("It is a special character\n");
    }
}
