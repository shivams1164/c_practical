#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row, col;
    printf("Enter the number of row and column in n*n form\n");
    scanf("%d%d",&row,&col);
    int arr1[row][col],arr2[row][col],add_arr[row][col],multi_arr[row][col];

    printf("Enter the value of Matrix 1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the (%d,%d) index value \n",i,j);
            scanf("%d",&arr1[i][j]);
        }
        
    }
    
     printf("Enter the value of Matrix 2\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the (%d,%d) index value \n",i,j);
            scanf("%d",&arr2[i][j]);
        }
        
    }

    printf("Addition of the matrix is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            add_arr[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",add_arr[i][j]);
        }
        printf("\n");
        
    }

    printf("Multiplication of the matrix is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            multi_arr[i][j]=arr1[i][j]*arr2[i][j];
            printf("%d ",multi_arr[i][j]);
        }
        printf("\n");
        
    }  

    return 0;
}
