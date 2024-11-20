/*利用求阶乘函数（用递归实现），编写程序计算C(n,0)+C(n,2)+...，其中C(n,m)表示从n个里面取m个的组合数。
例如：
n=8
C(8,0)+C(8,2)+C(8,4)+C(8,6)+C(8,8)
n=5
C(5,0)+C(5,2)+C(5,4)

输入正整数n（n不超过10）
输出格式"%d\n"*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int n){
    if(n==1||n==0)
        return 1;
    else
        return n*f(n-1);
}

int main(){
    int n, sum = 0;
    scanf("%d",&n);
    for(int i=0;i<=n;i+=2){
        sum += f(n) / ( f(i) * f(n-i) );
    }
    printf("%d\n",sum);

    system("pause");
    return 0;
}