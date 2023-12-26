#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col;
    printf("Enter the number of Row and Column respectivily\n");
    scanf("%d%d",&row,&col);
    int arr[row][col],add_diagonal=0;
    printf("Enter the value of Matrix 1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the (%d,%d) index value \n",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==j)
            {
                add_diagonal=add_diagonal+arr[i][j];
            }
            
        }
        
    }

    printf("Addition of diagonal element is %d",add_diagonal);
    return 0;
}
