#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter the number of rows (m) and columns (n) of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");

    // Input matrix elements
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowSum[m], colSum[n];

    // Initialize rowSum and colSum arrays with zeros
    for (int i = 0; i < m; i++)
    {
        rowSum[i] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        colSum[j] = 0;
    }

    // Calculate row sums and column sums
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    // Display row sums
    printf("Row sums:\n");
    for (int i = 0; i < m; i++)
    {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    // Display column sums
    printf("\nColumn sums:\n");
    for (int j = 0; j < n; j++)
    {
        printf("Column %d sum = %d\n", j + 1, colSum[j]);
    }

    return 0;
}
