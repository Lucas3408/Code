#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 计算一个n阶行列式的值
int n; // 矩阵的阶数
int determinant(int matrix[n][n]) {
    int det = 0;
    int submatrix[n-1][n-1];

    // 如果矩阵是2x2，直接计算行列式
    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }

    // 计算行列式的值
    for (int i = 0; i < n; i++) {
        // 构造子矩阵
        for (int j = 1; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (k < i) {
                    submatrix[j-1][k] = matrix[j][k];
                } else if (k > i) {
                    submatrix[j-1][k-1] = matrix[j][k];
                }
            }
        }

        // 递归计算子矩阵的行列式
        det += matrix[0][i] * pow(-1, i) * determinant(submatrix);
    }

    return det;
}

int main() {
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix);
    printf("The determinant is: %d\n", det);
    
    system("pause");
    return 0;
}