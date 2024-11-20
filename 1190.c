/*输入一个正整数，输出其各位倒过来的数
输入一个正整数。
输出其各位倒过来的数，输出格式为"%d\n"。
输出其各位倒过来的数减去n的值，输出格式为"%d\n"。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    int a = n;
    int digit = 0;
    int result = 0;
    while( n > 0){
        digit = n % 10;
        result = result * 10 + digit;
        n /= 10;
    }
    //printf("%d\n", result);
    printf("%d\n", result - a);

    system("pause");
    return 0;
}