/*用8进制（不省略前面的0）、16进制（不省略前面的0）格式分别输出123、12, 域宽为10。

一行输出一个结果。

顺序: 123的8进制, 123的16进制, 12的8进制数, 12的16进制数。*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int a = 123;
    int b = 12;
    printf("%010o\n", a);
    printf("%010X\n", a);
    printf("%010o\n", b);
    printf("%010X\n", b);


    system("pause");
    return 0;

}