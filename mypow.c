#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
double mypow(double x, int y){
    double z = 1;
    for (int i = 0; i < y; i++){
        z *= x;
        
    }
    return z;

    
}

long factorial(int n){
    int a = 1;
    for (int i = 1; i <= n; i ++){
        a *= i;
    }
    return a;
}

int main(){
    double a;
    int b;
    int n;
    scanf("%d",&n);
    
    printf("%ld",factorial(n));

    system("pause");
    return 0;
}