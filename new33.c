// add 2 matrix in 2D array
#include <stdio.h>
int main()
{
    int rows,cols,i,j;
    printf("Enter the number of Rows Columns: ");
    scanf("%d %d", &rows,&cols);
    int a[rows][cols];
    int sum[rows][cols];
    printf("Enter the elements in 2D array/Matrix:\n ");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf(" %d ", a[i][j]);
            sum[i][j] = a[i][j] + a[i][j];
        }
    }
    printf("\nSum of two matrix is:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf(" %d ", sum[i][j]);
        }
        printf("\n");

    }
    return 0;
}