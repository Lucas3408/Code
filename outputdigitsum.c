//输入一个正整数，输出其二进制数字之和
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    long long int num;
    long long int sum = 0;
    long long int i = 0;
    //char binary[63];


    scanf("%lld", &num);

    //printf("%b\n", num);
    //sprintf(binary, "%b", num);

    /*for( i = 0; i < strlen(binary); i++){
        sum += binary[i] - '0';

    }*/
    
    num = decimaltobinary(num);
    printf("%lld\n", num);

    while(num != 0){
        sum += num % 10;
        num = num / 10;
    }

    printf("%lld\n", sum);




    system("pause");
    return 0;


    
}