/*读入两个不超过25位的火星正整数A和B，计算A+B。
需要注意的是：在火星上，整数不是单一进制的，第n位的进制就是第n个素数。
例如：地球上的10进制数2，在火星上记为“1,0”，因为火星个位数是2进制的；
地球上的10进制数38，在火星上记为“1,1,1,0”，因为火星个位数是2进制的，十位数是3进制的，百位数是5进制的，千位数是7进制的……
每位的进制基数按从小到大的素数递增。

输入格式:
输入包含多组测试数据，每组测试数据一行，包含两个火星正整数A和B，火星整数的相邻两位数用逗号分隔，
A和B之间有一个空格间隔。当A和B都为0时输入结束，相应的结果不要输出。
输出格式:
针对每组测试数据输出1行，即火星表示法的A+B的值。 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isprime(int n){
    if(n <= 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if( n % i == 0 ){
            return 1;

        }
        return 0;
    }
}

int main(){

    int a[26], b[26], prime[26];
    int i, j = 0;
    
        for( j = 2; j <= 56; j++){
            if( isprime(j) == 0 ){
                printf("%d\n", j);
                prime[i] = j;
                i++;
            }
        }
    
    
    


    



    system("pause");
    return 0;
}