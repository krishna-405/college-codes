#include <stdio.h>
int main()
{
    int a[100][100], b[100][100];
    int row, col;
    printf("Enter the rows and colums of two matrix : ");
    scanf("%d %d", &row, &col);
    printf("Matrix is :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of a matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
