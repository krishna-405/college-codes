#include <stdio.h>
int main()
{
    int a[100][100], rows, col;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &col);
    printf("\nEnter the matrix details :\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is :\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
