/*实验二要求：
编写一个帮助小学生学习四则运算的程序，能够随机出题并根据输入结果统计分数
输出一种数学函数的值对应表，输出第一行为表头，后面每行输出自变量和相应的函数值，各行输出的自变量和函数值要对齐
输入一行字符，分别统计其中所含字母、数字以及其他字符的个数
编程实现一个位运算计算器*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
//输入一行字符，分别统计其中所含字母、数字以及其他字符的个数

    char ch[10000];
    int sum_1 = 0;
    int sum_2 = 0;
    int sum_3 = 0;


    scanf("%s", &ch);

    for (int i = 0; i < strlen(ch); i++){   //遍历字符

        if (ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z'){
            sum_1++;
        }else if (ch[i] >= '0' && ch[i] <= '9'){
            sum_2++;
        }else{
            sum_3++;
        }
    }

    printf("字母个数：%d\n数字个数：%d\n其他字符个数：%d\n", sum_1, sum_2, sum_3);



    system("pause");
    return 0;

}