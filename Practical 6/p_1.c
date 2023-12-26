#include <stdio.h>
int main(int argc, char const *argv[])
{
    int row, col;
    printf("Enter the number of Row and Column respectivily\n");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    printf("Enter the value of the element\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the value of (%d,%d) index value\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Element of the matrix is \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
