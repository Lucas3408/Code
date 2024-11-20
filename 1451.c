/*求三个整数的最大值。
输入3个整数，输入格式"%d%d%d"
输出最大值，输出格式"%d\n"*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if( a > b && a > c){
        printf("%d\n", a);
    }else if ( b > a && b > c){
        printf("%d\n", b);
    }else{
        printf("%d\n", c);
    }

    system("pause");
    return 0;
}