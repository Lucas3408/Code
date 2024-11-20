//20131212、小明、男、23、1.76
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a = 20131212;
    char b[] = "小明";
    char c[] = "男";
    int d = 23;
    float e = 1.76;
    printf("%10d%10s%10s%10d%.6f\n", a, b, c, d, e);
    

    system("pause");
    return 0;
}