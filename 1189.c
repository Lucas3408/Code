/*
输入一个整数，输出首末位数字之和，输出格式为"%d\n"。
输入一个整数
输出首末位数字之和，输出格式为"%d\n"。*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int a = pow( 10, (int)(log10(n)));

    int last = n % 10;
    int first = n / a;
    sum = last + first;
    printf("%d\n", sum);
    



    system("pause");
    return 0;
}