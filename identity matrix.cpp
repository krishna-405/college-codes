#include <stdio.h>
int main()
{
    int a[100][100], row, col;
    printf("Enter the rows and columns : ");
    scanf("%d %d", &row, &col);
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
