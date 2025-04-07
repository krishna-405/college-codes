#include <stdio.h>
#include <string.h>
int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%s", &a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("Characte is vowel\n");
    }
    else 
    {
        printf("Character is consonent\n");
    }
}
