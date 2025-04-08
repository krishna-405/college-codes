#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], row, col;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &row, &col);
    printf("Matrix 1 :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix 2 :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Comparision of two matrix :\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(a[i][j] == b[i][j])
            {
                printf("Both elements is same\n");
            }
            else
            {
                printf("Both elements are not same\n");
            }
        }
    }
}
