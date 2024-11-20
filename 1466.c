/*1466 
计算sin函数从0到a与x轴所夹区域的面积，即sin(x)从0到a的积分。
输入a，格式"%f"
输出面积，格式"%.2f\n"*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a = 1.000;
    double area = 1.000;
    scanf("%f", &a);  //rad
    area = 1 - cos(a);  //N-L
    printf("%.2f\n", area);

    system("pause");
    return 0;
}