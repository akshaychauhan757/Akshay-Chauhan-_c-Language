// wap to multiply scalar value with matrix in 2D array
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    float scalar;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d %d", &rows, &cols);

    float matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }

    printf("Enter the scalar value to multiply:\n");
    scanf("%f", &scalar);

    // Multiply each element by scalar and print
    printf("Resultant matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%.2f ", matrix[i][j] * scalar);
        }
        printf("\n");
    }
    return 0;
}
