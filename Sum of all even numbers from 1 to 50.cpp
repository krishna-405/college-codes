#include <stdio.h>
int main()
{
    int a=1, b=50, sum=0;
    for(int i=1; i<=50; i++)
    {
        if(i%2 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of even numbers between 1 and 50 : %d\n", sum);
}
