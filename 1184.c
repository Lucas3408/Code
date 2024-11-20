//用无符号整数、有符号整数依次以域宽12输出9000000000
#include <stdio.h>
#include <stdlib.h>
int main(){
    //char a;
    //scanf("%c", &a);
    //printf("%d", a);
    long long a = 9000000000;
    printf("%12llu\n", a);
    printf("%12lld\n", a);
    system("pause");

}