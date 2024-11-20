/*输出0到n度的余弦值，即依次输出0,1,2,3，...，n度的余弦值。圆周率取3.14。
输入n（0<=n<=360），输入格式为"%d"
每行的输出格式为"%3d%8.3f\n", 其中第一个为度数, 第2个为余弦值。*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14
int main(){
    int n = 0;
    int i = 0;
    float rad = 1.000 * i * pi / 180.000 ;
    scanf("%d", &n);
    for (i = 0; i <= n; i++){
        float rad = 1.000 * i * pi / 180.000 ;

        printf("%3d%8.3f\n", i, cos(rad));
    }




    system("pause");
    return 0;
}