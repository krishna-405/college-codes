#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], row, col;
    printf("Enter number of rows : ");
    scanf("%d", &row);
    printf("Enter the columns : ");
    scanf("%d", &col);
    printf("\nEnter the details of first matrix : \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the details of second matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nAdding the two matrix :\n");
    int sum[100][100];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
