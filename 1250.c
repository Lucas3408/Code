/*在一种室内互动游戏中，魔术师要每位观众心里想一个三位数abc（a、b、c分别是百位、十位和个位数字），然后魔术师让观众心中记下acb、bac、bca、cab、cba五个数以及这5个数的和值。只要观众说出这个和是多少，则魔术师一定能猜出观众心里想的原数abc是多少。
例如，观众甲说他计算的和值是1999，则魔术师立即说出他想的数是443
    观众乙说他计算的和值是1998，则魔术师说：“你算错了！”。请编程模拟这个数字魔术游戏。
输入格式要求："%d"提示信息："Input a sum:"
输出格式要求："The sum you calculated is wrong!\n""The number is %d\n"*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int sum, a, b, c = 0;
    int n = 100*a + 10*b + c;
    int x = a * 100 + b * 10 + c + a * 100 + c * 10 + b + b * 100 + a * 10 + c + b * 100 + c * 10 + a + c * 100 + b * 10 + a + c * 100 + a * 10 + b;
    printf("Input a sum:");
    scanf("%d", &sum);
    do{
        if ( a == 9 && b == 9 && c == 9){
            printf("The sum you calculated is wrong!\n");
            break;
        }else{
            for (a = 1; a < 10; a++){
                for (b = 1; b < 10; b++){
                    for (c = 1; c < 10; c++){
                        if (x == sum){
                            break;
                        }
                    }
                }
            }
        }
        
    }while (x != sum);

    printf("The number is %d\n", n);
    
    system("pause");
    return 0;
}