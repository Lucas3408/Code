/*5行5列的方格棋盘，用黑白子排满，已知黑子个数，问能排出多少种图案。
输入黑子个数
输出能排出的图案数，输出格式"%d\n"*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long factorial(int n){
    int a = 1;
    for (int i = 1; i <= n; i ++){
        a *= i;
    }
    return a;
}

/*int combinations(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}*/

int main(){
    int bl, wh = 0;
    long result = 1;
    


    scanf("%d", &bl);
    //printf("%d\n", bl);
    
    wh = 25 - bl;

    //printf("%d\n", wh);

    
    for (int i = 1; i <= bl; i++){
        result = result * (26 - i) / i;
    }
    
    printf("%ld\n", result);

    system("pause");
    return 0;
}