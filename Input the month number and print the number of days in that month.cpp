#include <stdio.h>
int main()
{
    int a;
    printf("Enter the month number : ");
    scanf("%d", &a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    {
        printf("It has 31 days\n");
    }
    else if(a==2)
    {
        printf("It has 28 or 29 days\n");
    }
    else if(a==4 || a==6 || a==9 || a==11)
    {
        printf("It has 30 days\n");
    }
    else
    {
        printf("A year has only 12 months\n");
    }
}
