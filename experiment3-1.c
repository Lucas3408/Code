/*素数判断
从键盘任意输入一个整数 ，判断是否为素数。利用试商法判断素数，素数判断利用函数Isprime()实现；
用数学的方法可以证明： 为素数当且仅当 不能被 ～ 𝑛（取整）之间的数整除。根据素数的 这个性质，对素数判断函数的实现进行优化；
从键盘任意输入一个整数 ，编程计算并输出 之间的所有素数之和；
针对指定区间，验证正偶数都能够分解为两个素数之和（即验证哥德巴赫猜想对该区间内的正偶数成立），正奇数都能够分解为三个素数之和。*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int n){      // 1-->素数  0-->非素数
    if(n <= 1){
        return 0;
    }
    int i = 2;
    for( i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    //1.判断素数（已优化）
    int a = 0;
    printf("1.请输入一个整数：");
    scanf("%d", &a);
    int n = isprime(a);
    if(n == 1){
        printf("%d是素数\n", a);
    }else{
        printf("%d不是素数\n", a);
    }

    //2.计算素数之和
    int b = 0;
    int sum = 0;
    printf("2.请输入一个整数：");
    scanf("%d", &b);
    for ( int i = 2; i <= b; i++){
        if( isprime(i) == 1 ){
            sum += i;
        }
    }
    printf("小于给定值的素数之和为：%d\n", sum);

    //3.验证哥德巴赫猜想
    int c = 0;
    int d = 1;
    printf("给定区间，请输入区间左端点和右端点：");
    scanf("%d%d", &c, &d);
    for ( int i = c; i <= d; i++ ){
        if ( i % 2 == 0 ){
            for( int j = 2; j <= i/2; j++){  //偶数拆成两个素数
                if( isprime(j) == 1 && isprime(i-j) == 1 ){
                    printf("%d = %d + %d\n", i, j, i-j);
                    break;
                }
            }
        }else{
            for( int p = 2; p <= i/2; p++){   //奇数拆成三个素数
                for ( int q = 2; q <= i/2; q++){
                    if( isprime(p) == 1 && isprime(q) == 1 && isprime(i-p-q) == 1 ){
                        printf("%d = %d + %d + %d\n", i, p, q, i-p-q);
                        break;
                    }
                }
                
            }
        }
    }




    system("pause");
    return 0;
}