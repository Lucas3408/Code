/*ACM2023_1 约数之和等于另一个数，输入一个数s，找出最小的一组数  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sum_of_divisors(int s) {
    int i;
    int sum = 1;
    for ( i = 1; i <= sqrt(s); i++ ){
        if (s % i == 0){
            sum = sum + i + s /i;
            if ( i == s / i)
                sum = sum - i;
        }
    }

    return sum;
}

int main(){
    int x,a,b;
    printf("please input a number:");
    scanf("%d", &x);  //input s
    //printf("the sum of divisors of %d is %d\n", s, sum_of_divisors(s));   //check the sum of divisors of s
    //int sum = sum_of_divisors(s);

    a = x;
    while ( 1 ){  
        a++;
        b = sum_of_divisors(a);
        if ( sum_of_divisors(b) == a ){

            printf("the first pair is: %d %d\n", a, b);
            
            break;
        }
            
        
    }
    printf("the first pair is: %d %d\n", a, b);

    system("pause");
    return 0;
}