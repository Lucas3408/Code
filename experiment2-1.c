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
    //编写一个帮助小学生学习四则运算的程序，能够随机出题并根据输入结果统计分数
    int a,b,c;
    
    /* example of random
    srand(time(0));
    c = rand() % 100;
    printf("%d\n", c);
    */

    int score = 0;  //initiate user's score
    int question_num = 0;  //initiate the number of questions
    int ans; //correct answer
    int user_ans;  //user's answer

    clock_t start, end;
    double cpu_time_used;
    

    srand( time(0) );

    printf("本程序支持自定义题目数量，可随机输出加减乘除题目，并统计分数\n注：除法结果为整数，做对一道题10分，做错一道题倒扣10分\n");
    printf("请输入题目数量：");
    scanf("%d", &question_num);
    printf("请开始作答：\n");

    start = clock();

    for (int i = 1; i <= question_num; i++){
        a = rand() % 10;
        b = rand() % 10;
        c = rand() % 4;  //randomly choose operation

        switch (c){
            case 0:
                ans = a + b;
                printf("%d + %d = ", a, b);
                scanf("%d", &user_ans);  //input answer
                if (user_ans == ans){
                    score += 10;
                }else{
                    score -= 10;
                }
                break;
            case 1:
                ans = a - b;
                printf("%d - %d = ", a, b);
                scanf("%d", &user_ans);  //input answer
                if (user_ans == ans){
                    score += 10;
                }else{
                    score -= 10;
                }
                break;
            case 2:
                ans = a * b;
                printf("%d * %d = ", a, b);
                scanf("%d", &user_ans);  //input answer
                if (user_ans == ans){
                    score += 10;
                }else{
                    score -= 10;
                }
                break;
            case 3:
                ans = a / b;
                printf("%d / %d = ", a, b);
                scanf("%d", &user_ans);  //input answer
                if (user_ans == ans){
                    score += 10;
                }else{
                    score -= 10;
                }
                break;

        }
        
    }

    end = clock();
    printf("你的分数为：%d\n满分为：%d\n", score, question_num * 10);

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    
    if ( cpu_time_used < question_num * 1.5 && score == question_num * 10){
        printf("你的用时为：%.2f 秒\n你的运算速度很快......\n", cpu_time_used);        
    }else {
        printf("你的用时为：%.2f 秒\n加油！\n", cpu_time_used);
    }
    



    system("pause");
    return 0;
}