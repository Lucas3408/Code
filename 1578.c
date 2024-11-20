/*输入若干个线段，有可能重叠，计算线的总长。
第1行输入正整数n，后面n行输入n个线段的起点和终点，输入格式"%d%d"
输出线的总长度，输出格式"%d\n"*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

int main(){
    int n, p, q;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int a,b;
        scanf("%d%d",&a, &b);
        p = max(a,p);
        p = max(b,p);
        q = min(a,q);
        q = min(b,q);

    }

    
    printf("%d\n",p - q);



    system("pause");
    return 0;
}