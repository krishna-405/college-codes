#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if(a==1)
    {
        printf("Its Monday\n");
    }
    else if(a==2)
    {
        printf("Its Tuesday\n");
    }
    else if(a==3)
    {
        printf("Its Wednesday\n");
    }
    else if(a==4)
    {
        printf("Its Thursday\n");
    }
    else if(a==5)
    {
        printf("Its Friday\n");
    }
    else if(a==6)
    {
        printf("Its Saturday\n");
    }
    else if(a==7)
    {
        printf("Its Sunday\n");
    }
    else
    {
        printf("A week has only seven days\n");
    }
}
