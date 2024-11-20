/*1109
输入一个数，由小到大输出其所有素因子。
一个整数
2≤n≤1e9
每个数输出格式为"%d\t",
最后输出个数，格式为"%d\n"
本题需要使用欧拉筛，否则超时
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int n){   //0 非素数  1 素数
    int i;
    if(i == 1){ 
        return 0;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n; 
    scanf("%d", &n);
    
    
 



    system("pause");
    return 0;
}

