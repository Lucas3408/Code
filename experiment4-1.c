/*围绕数组的教学要求设计实验任务，实验内容可参考下面的任务。 编程实现下面的任务：
二维矩阵乘法 
输入一个N*M的实数矩阵和一个M*T的实数矩阵 ，计算并输出 。
数的排序
输入若干个整数，至少使用两种排序算法对其进行排序并输出。
编程实现一个简化的对称加密算法。
在vscode上安装Devkit编译插件和鲲鹏开发框架插件
学会插件的使用方法（安装和使用方法 参考《 插件使用实验手册》）。*/

/*二维矩阵*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, m, t;
    printf("请输入第一个矩阵的行数：");
    scanf("%d", &n);
    printf("请输入第一个矩阵的列数（即第二个矩阵的行数）：");
    scanf("%d", &m);
    printf("请输入第二个矩阵的列数：");
    scanf("%d", &t);
    float a[n][m], b[m][t], c[n][t];   //a -> n*m b -> m*t   c -> a * b
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%f", &a[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < t; j++){
            
            scanf("%f", &b[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < t; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("第一个矩阵为：\n");   //n * m
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n第二个矩阵为：\n");  //m * t
    for(int i = 0; i < m; i++){
        for(int j = 0; j < t; j++){

            printf("%.2f ", b[i][j]);
        }
        printf("\n");
    }

    printf("\n两个矩阵相乘的结果为：\n");  //n * t
    for(int i = 0; i < n; i++){
        for(int j = 0; j < t; j++){

            printf("%.2f ", c[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}