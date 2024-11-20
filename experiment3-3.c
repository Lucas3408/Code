/*编程实现一个伪随机数生成器。
线性同余生成器（LCG）
X_{n+1} = (a * X_n + c) % m
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int lcg(int seed){
    int a = 14532525;
    int c = 1042890539;
    int m = 10000;
    
    seed = (a * seed + c) % m;
    return seed;
}

int main(){
    int seed = time(NULL);
    int num = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++){
        seed = lcg(seed);
        printf("%d\n", seed);
    }
    

    system("pause");
    return 0;
}