/*求最大
输入若干个正整数，求其中最大的数，要求用-1终止输入。
一行，共n(1<n<1000000)个正整数，以-1结束
一行，一个正整数*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n = 0;
    int max = 0;
    while( n != -1){
        scanf("%d",&n);
        if(n > max)
            max = n;
    }
    printf("%d\n",max);
    



    system("pause");
    return 0;
}