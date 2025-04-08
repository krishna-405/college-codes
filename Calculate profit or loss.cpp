#include <stdio.h>
int main()
{
    int amt, sell, profit, loss;
    printf("Enter the amount of selling : ");
    scanf("%d", &amt);
    printf("Enter the selling prize : ");
    scanf("%d", &sell);
    if(amt < sell)
    {
        printf("Its a loss.\n");
    }
    else if(amt > sell)
    {
        printf("Its a profit.\n");
    }
    else
    {
        printf("Neither loss nor profit.\n");
    }
}
