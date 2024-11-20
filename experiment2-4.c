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
//编程实现一个位运算计算器
    int a, b, c;

    printf("请选择运算：\n1. & ( and )\n2. | ( or )\n3. ^ ( xor )\n4. ~ ( not )\n5. << ( left shift )\n6. >> ( right shift )\n");

    scanf("%d", &c);

    switch(c){
        case 1:
        printf("请输入两个整数：\n");
        scanf("%d %d", &a, &b); 
        printf("%d & %d = %d\n", a, b, a & b); 
        break;

        case 2:
        printf("请输入两个整数：\n");
        scanf("%d %d", &a, &b);
        printf("%d | %d = %d\n", a, b, a | b);
        break;

        case 3:
        printf("请输入两个整数：\n");
        scanf("%d %d", &a, &b);
        printf("%d ^ %d = %d\n", a, b, a ^ b);
        break;

        case 4:
        printf("请输入一个整数：\n");
        scanf("%d", &a);
        printf("~ %d = %d\n", a, ~ a);
        break;

        case 5:
        printf("请输入两个整数：\n");
        scanf("%d %d", &a, &b);
        printf("%d << %d = %d\n", a, b, a << b);
        break;

        case 6:
        printf("请输入两个整数：\n");
        scanf("%d %d", &a, &b);
        printf("%d >> %d = %d\n", a, b, a >> b);
        break;

        default:
        printf("输入错误！\n");
        main();
        break;


    }


system("pause");
return 0;
}