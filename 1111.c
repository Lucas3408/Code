/*输入两个数，输出最大公约数。*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(m,n){
    if(n==0){
        return m;
    }else{
        return gcd(n,m%n);
    }
    
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",gcd(m,n));

    system("pause");
    return 0;
}