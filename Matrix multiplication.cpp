#include <stdio.h>
int main()
{
    int a[100][100], b[100][100];
    int row, col;
    printf("Enter the rows and colums of two matrix : ");
    scanf("%d %d", &row, &col);
    printf("Matrix 1 :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix 2 : \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int mul[100][100];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                mul[i][j] = a[i][j] * b[i][j];
                // printf("%d\n", mul[i][j]);
            }
        }
    }
    printf("Scalar multiplication of two matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}
