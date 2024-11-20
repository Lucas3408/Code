/*斐波那契数列（Fibonacci sequence），又称黄金分割数列（它的前一项与后一项的比值无限接近黄金分割数0.618），
因数学家莱昂纳多·斐波那契（Leonardo Fibonacci）以兔子繁殖为例子而引入，
故又称“兔子数列”，其数值为：1、1、2、3、5、8、13、21、34……在数学上，这一数列以如下递推的方法定义：
F(0)=0，F(1)=1, F(n)=F(n - 1)+F(n - 2)（n ≥ 2，n ∈ N*）。
输入一个正整数n（不超过20），输出F(n)的值，输出格式"%d\n"。*/
#include <stdio.h>
#include <stdlib.h>

int f(int n){
    if (n==0)return 0;
    if (n==1)return 1;
    return f(n-1)+f(n-2);
}
int main(){
    int n;
    scanf("%d", &n);
    int c = f(n);
    printf("%d\n", c);

    system("pause");
    return 0;

}
