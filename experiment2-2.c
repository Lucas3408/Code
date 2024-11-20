/*实验二要求：
编写一个帮助小学生学习四则运算的程序，能够随机出题并根据输入结果统计分数
输出一种数学函数的值对应表，输出第一行为表头，后面每行输出自变量和相应的函数值，各行输出的自变量和函数值要对齐
输入一行字符，分别统计其中所含字母、数字以及其他字符的个数
编程实现一个位运算计算器*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
//输出一种数学函数的值对应表，输出第一行为表头，后面每行输出自变量和相应的函数值，各行输出的自变量和函数值要对齐
    double a, b, c;
    double i = 1;
    double y;
    int type;
    printf("请输入函数类型：\n1: y = ax + b\n2: y = ax^2 + bx + c\n3: y = a + b * ln(x)\n4: y = a * e^(bx)\n5: y = a * b^x\n6: y = a * x^b\n7: y = a + b/x\n");
    
    
    scanf("%d", &type);

    switch (type){
        case 1:
            printf("input a and b:\n");
            scanf("%lf %lf", &a, &b);
            
            printf("\nx\ty\n\n");
            for (i = 1; i <= 10; i++){
                y = a * i + b;
                printf("%.0lf\t%.4lf\n", i, y);
            }
            break;
        case 2:
            printf("input a, b and c:\n");
            scanf("%lf %lf %lf", &a, &b, &c);

            printf("\nx\ty\n");
            for (i = 1; i <= 10; i++){
                y = a * i * i + b * i + c;
                printf("%.0lf\t%.4lf\n", i, y);

            }
            break;
        case 3:
            printf("input a and b:\n");
            scanf("%lf %lf", &a, &b);

            printf("\nx\ty\n");
            for (i = 1; i <= 10; i++){

                y = a + b * log(i);
                printf("%.0lf\t%.4lf\n", i, y);

            }
            break;
        case 4:
            printf("input a and b:\n");
            scanf("%lf %lf", &a, &b);

            printf("\nx\ty\n");
            for (i = 1; i <= 10; i++){

                y = a * exp(b * i);
                printf("%.0lf\t%.4lf\n", i, y);
                
            }
            break;
        case 5:
            printf("input a and b:\n");
            scanf("%lf %lf", &a, &b);

            printf("\nx\ty\n");
            for (i = 1; i <= 10; i++){

                y = a * pow(b, i);
                printf("%.0lf\t%.4lf\n", i, y);

            }
            break;
        case 6:
            printf("input a and b:\n");
            scanf("%lf %lf", &a, &b);

            printf("\nx\ty\n");
            for (i = 1; i <= 10; i++){

                y = a * pow(i, b);
                printf("%.0lf\t%.4lf\n", i, y);
            }
            break;
        case 7:
            printf("input a and b:\n");
            scanf("%lf %lf", &a, &b);

            printf("\nx\ty\n");
            for (i = 1; i <= 10; i++){

                y = a + b / i;
                printf("%.0lf\t%.4lf\n", i, y);

            }
            break;
        default:
            printf("输入错误\n");
            main();
            break;
    }



    



    system("pause");
    return 0;
}