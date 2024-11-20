#include <stdio.h>
#include <stdlib.h>
int climbStairs(int n) {
    if(n == 1){
        return 1;
    }else if(n == 2){
        return 2;
    }else if(n == 3){
        return 3;
    }else{
    return climbStairs(n - 1) + climbStairs(n - 2);
    }
}

int main(){
    int m = 0;
    scanf("%d", &m);
    
    climbStairs(m);
    printf("%d", climbStairs(m));
    system("pause");
    return 0;
}