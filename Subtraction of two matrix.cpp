#include <stdio.h>
int main()
{
    int a[100][100], b[100][100];
    int row, col;
    printf("Enter the rows and columns :\n");
    scanf("%d", &row);
    scanf("%d", &col);
    printf("Details\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix Subtraction\n");
    int sub[100][100];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sub[i][j] = a[i][j]-b[i][j];
            printf("%d", sub[i][j]);
        }
        printf("\n");
    }
}
